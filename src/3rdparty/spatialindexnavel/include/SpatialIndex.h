// Spatial Index Library
//
// Copyright (C) 2003 Navel Ltd.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  Email:
//    mhadji@gmail.com

#pragma once

#include "tools/Tools.h"
using namespace Tools;

# if !HAVE_BZERO
# define bzero(d, n) memset((d), 0, (n))
# endif

#ifndef M_PI_2
#define M_PI_2 1.57079632679489661922
#endif

namespace SpatialIndex
{
	class Point;
	class Region;

	typedef int64_t id_type;

	SIDX_DLL enum CommandType
	{
		CT_NODEREAD = 0x0,
		CT_NODEDELETE,
		CT_NODEWRITE
	};

	class SIDX_DLL InvalidPageException : public Exception
	{
	public:
		InvalidPageException(id_type id);
		virtual ~InvalidPageException() {}
		virtual std::string what();

	private:
		std::string m_error;
	}; // InvalidPageException

	//
	// Interfaces
	//

	interface SIDX_DLL IShape : public ISerializable
	{
	public:
		virtual bool intersectsShape(const IShape& in) const = 0;
		virtual bool containsShape(const IShape& in) const = 0;
		virtual bool touchesShape(const IShape& in) const = 0;
		virtual void getCenter(Point& out) const = 0;
		virtual size_t getDimension() const = 0;
		virtual void getMBR(Region& out) const = 0;
		virtual double getArea() const = 0;
		virtual double getMinimumDistance(const IShape& in) const = 0;
		virtual ~IShape() {}
	}; // IShape

	interface SIDX_DLL ITimeShape : public Tools::IInterval
	{
	public:
		virtual bool intersectsShapeInTime(const ITimeShape& in) const = 0;
		virtual bool intersectsShapeInTime(const Tools::IInterval& ivI, const ITimeShape& in) const = 0;
		virtual bool containsShapeInTime(const ITimeShape& in) const = 0;
		virtual bool containsShapeInTime(const Tools::IInterval& ivI, const ITimeShape& in) const = 0;
		virtual bool touchesShapeInTime(const ITimeShape& in) const = 0;
		virtual bool touchesShapeInTime(const Tools::IInterval& ivI, const ITimeShape& in) const = 0;
		virtual double getAreaInTime() const = 0;
		virtual double getAreaInTime(const Tools::IInterval& ivI) const = 0;
		virtual double getIntersectingAreaInTime(const ITimeShape& r) const = 0;
		virtual double getIntersectingAreaInTime(const Tools::IInterval& ivI, const ITimeShape& r) const = 0;
		virtual ~ITimeShape() {}
	}; // ITimeShape

	interface SIDX_DLL IEvolvingShape
	{
	public:
		virtual void getVMBR(Region& out) const = 0;
		virtual void getMBRAtTime(double t, Region& out) const = 0;
		virtual ~IEvolvingShape() {}
	}; // IEvolvingShape

	interface SIDX_DLL IEntry : public Tools::IObject
	{
	public:
		virtual id_type getIdentifier() const = 0;
		virtual void getShape(IShape** out) const = 0;
		virtual ~IEntry() {}
	}; // IEntry

	interface SIDX_DLL INode : public IEntry, public Tools::ISerializable
	{
	public:
		virtual size_t getChildrenCount() const = 0;
		virtual id_type getChildIdentifier(size_t index) const = 0;
		virtual void getChildData(size_t index, size_t& len, byte** data) const = 0;
		virtual void getChildShape(size_t index, IShape** out) const = 0;
		virtual size_t getLevel() const = 0;
		virtual bool isIndex() const = 0;
		virtual bool isLeaf() const = 0;
		virtual ~INode() {}
	}; // INode

	interface SIDX_DLL IData : public IEntry
	{
	public:
		virtual void getData(size_t& len, byte** data) const = 0;
		virtual ~IData() {}
	}; // IData

	interface SIDX_DLL IDataStream : public Tools::IObjectStream
	{
	public:
		virtual IData* getNext() = 0;
		virtual ~IDataStream() {}
	}; // IDataStream

	interface SIDX_DLL ICommand
	{
	public:
		virtual void execute(const INode& in) = 0;
		virtual ~ICommand() {}
	}; // ICommand

	interface SIDX_DLL INearestNeighborComparator
	{
	public:
		virtual double getMinimumDistance(const IShape& query, const IShape& entry) = 0;
		virtual double getMinimumDistance(const IShape& query, const IData& data) = 0;
		virtual ~INearestNeighborComparator() {}
	}; // INearestNeighborComparator

	interface SIDX_DLL IStorageManager
	{
	public:
		virtual void loadByteArray(const id_type id, size_t& len, byte** data) = 0;
		virtual void storeByteArray(id_type& id, const size_t len, const byte* const data) = 0;
		virtual void deleteByteArray(const id_type id) = 0;
		virtual ~IStorageManager() {}
	}; // IStorageManager

	interface SIDX_DLL IVisitor
	{
	public:
		virtual void visitNode(const INode& in) = 0;
		virtual void visitData(const IData& in) = 0;
		virtual void visitData(std::vector<const IData*>& v) = 0;
		virtual ~IVisitor() {}
	}; // IVisitor

	interface SIDX_DLL IQueryStrategy
	{
	public:
		virtual void getNextEntry(const IEntry& previouslyFetched, id_type& nextEntryToFetch, bool& bFetchNextEntry) = 0;
		virtual ~IQueryStrategy() {}
	}; // IQueryStrategy

	interface SIDX_DLL IStatistics
	{
	public:
		virtual size_t getReads() const = 0;
		virtual size_t getWrites() const = 0;
		virtual size_t getNumberOfNodes() const = 0;
		virtual size_t getNumberOfData() const = 0;
		virtual ~IStatistics() {}
	}; // IStatistics

	interface SIDX_DLL ISpatialIndex
	{
	public:
		virtual void insertData(size_t len, const byte* pData, const IShape& shape, id_type shapeIdentifier) = 0;
		virtual bool deleteData(const IShape& shape, id_type shapeIdentifier) = 0;
		virtual void containsWhatQuery(const IShape& query, IVisitor& v)  = 0;
		virtual void intersectsWithQuery(const IShape& query, IVisitor& v) = 0;
		virtual void pointLocationQuery(const Point& query, IVisitor& v) = 0;
		virtual void nearestNeighborQuery(uint32_t k, const IShape& query, IVisitor& v, INearestNeighborComparator& nnc) = 0;
		virtual void nearestNeighborQuery(uint32_t k, const IShape& query, IVisitor& v) = 0;
		virtual void selfJoinQuery(const IShape& s, IVisitor& v) = 0;
		virtual void queryStrategy(IQueryStrategy& qs) = 0;
		virtual void getIndexProperties(Tools::PropertySet& out) const = 0;
		virtual void addCommand(ICommand* in, CommandType ct) = 0;
		virtual bool isIndexValid() = 0;
		virtual void getStatistics(IStatistics** out) const = 0;
		virtual ~ISpatialIndex() {}

	}; // ISpatialIndex

	namespace StorageManager
	{
		SIDX_DLL enum StorageManagerConstants
		{
			EmptyPage = -0x1,
			NewPage = -0x1
		};

		interface SIDX_DLL IBuffer : public IStorageManager
		{
		public:
			virtual size_t getHits() = 0;
			virtual void clear() = 0;
			virtual ~IBuffer() {}
		}; // IBuffer

		SIDX_DLL  IStorageManager* returnMemoryStorageManager(Tools::PropertySet& in);
		SIDX_DLL  IStorageManager* createNewMemoryStorageManager();

		SIDX_DLL  IStorageManager* returnDiskStorageManager(Tools::PropertySet& in);
		SIDX_DLL  IStorageManager* createNewDiskStorageManager(std::string& baseName, size_t pageSize);
		SIDX_DLL  IStorageManager* loadDiskStorageManager(std::string& baseName);

		SIDX_DLL  IBuffer* returnRandomEvictionsBuffer(IStorageManager& ind, Tools::PropertySet& in);
		SIDX_DLL  IBuffer* createNewRandomEvictionsBuffer(IStorageManager& in, size_t capacity, bool bWriteThrough);
	}

	//
	// Global functions
	//
	SIDX_DLL  std::ostream& operator<<(std::ostream&, const ISpatialIndex&);
	SIDX_DLL  std::ostream& operator<<(std::ostream&, const IStatistics&);
}

#include "Point.h"
#include "Region.h"
#include "LineSegment.h"
#include "TimePoint.h"
#include "TimeRegion.h"
#include "MovingPoint.h"
#include "MovingRegion.h"
#include "RTree.h"
#include "MVRTree.h"
#include "TPRTree.h"
#include "Version.h"
