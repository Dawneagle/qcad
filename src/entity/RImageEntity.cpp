/**
 * Copyright (c) 2011-2018 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */
#include "RDebug.h"
#include "RExporter.h"
#include "RImageEntity.h"

RPropertyTypeId RImageEntity::PropertyCustom;
RPropertyTypeId RImageEntity::PropertyHandle;
RPropertyTypeId RImageEntity::PropertyProtected;
RPropertyTypeId RImageEntity::PropertyWorkingSet;
RPropertyTypeId RImageEntity::PropertyType;
RPropertyTypeId RImageEntity::PropertyBlock;
RPropertyTypeId RImageEntity::PropertyLayer;
RPropertyTypeId RImageEntity::PropertyLinetype;
RPropertyTypeId RImageEntity::PropertyLinetypeScale;
RPropertyTypeId RImageEntity::PropertyLineweight;
RPropertyTypeId RImageEntity::PropertyColor;
RPropertyTypeId RImageEntity::PropertyDisplayedColor;
RPropertyTypeId RImageEntity::PropertyDrawOrder;

RPropertyTypeId RImageEntity::PropertyFileName;
RPropertyTypeId RImageEntity::PropertyInsertionPointX;
RPropertyTypeId RImageEntity::PropertyInsertionPointY;
RPropertyTypeId RImageEntity::PropertyInsertionPointZ;
RPropertyTypeId RImageEntity::PropertyUX;
RPropertyTypeId RImageEntity::PropertyUY;
RPropertyTypeId RImageEntity::PropertyVX;
RPropertyTypeId RImageEntity::PropertyVY;
RPropertyTypeId RImageEntity::PropertyScaleFactorX;
RPropertyTypeId RImageEntity::PropertyScaleFactorY;
RPropertyTypeId RImageEntity::PropertyWidth;
RPropertyTypeId RImageEntity::PropertyHeight;
RPropertyTypeId RImageEntity::PropertyAngle;
RPropertyTypeId RImageEntity::PropertyFade;

RImageEntity::RImageEntity(RDocument* document, const RImageData& data) :
    REntity(document), data(document, data) {

    RDebug::incCounter("RImageEntity");
}

RImageEntity::RImageEntity(const RImageEntity& other) : REntity(other) {
    RDebug::incCounter("RImageEntity");
    data = other.data;
}

RImageEntity::~RImageEntity() {
    RDebug::decCounter("RImageEntity");
}

void RImageEntity::init() {
    RImageEntity::PropertyCustom.generateId(RImageEntity::getRtti(), RObject::PropertyCustom);
    RImageEntity::PropertyHandle.generateId(RImageEntity::getRtti(), RObject::PropertyHandle);
    RImageEntity::PropertyProtected.generateId(RImageEntity::getRtti(), RObject::PropertyProtected);
    RImageEntity::PropertyWorkingSet.generateId(RImageEntity::getRtti(), RObject::PropertyWorkingSet);
    RImageEntity::PropertyType.generateId(RImageEntity::getRtti(), REntity::PropertyType);
    RImageEntity::PropertyBlock.generateId(RImageEntity::getRtti(), REntity::PropertyBlock);
    RImageEntity::PropertyLayer.generateId(RImageEntity::getRtti(), REntity::PropertyLayer);
    RImageEntity::PropertyLinetype.generateId(RImageEntity::getRtti(), REntity::PropertyLinetype);
    RImageEntity::PropertyLinetypeScale.generateId(RImageEntity::getRtti(), REntity::PropertyLinetypeScale);
    RImageEntity::PropertyLineweight.generateId(RImageEntity::getRtti(), REntity::PropertyLineweight);
    RImageEntity::PropertyColor.generateId(RImageEntity::getRtti(), REntity::PropertyColor);
    RImageEntity::PropertyDisplayedColor.generateId(RImageEntity::getRtti(), REntity::PropertyDisplayedColor);
    RImageEntity::PropertyDrawOrder.generateId(RImageEntity::getRtti(), REntity::PropertyDrawOrder);

    RImageEntity::PropertyFileName.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "File"));

    RImageEntity::PropertyInsertionPointX.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "Position"), QT_TRANSLATE_NOOP("REntity", "X"), false, RPropertyAttributes::Geometry);
    RImageEntity::PropertyInsertionPointY.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "Position"), QT_TRANSLATE_NOOP("REntity", "Y"), false, RPropertyAttributes::Geometry);
    RImageEntity::PropertyInsertionPointZ.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "Position"), QT_TRANSLATE_NOOP("REntity", "Z"), false, RPropertyAttributes::Geometry);

    RImageEntity::PropertyUX.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "U"), QT_TRANSLATE_NOOP("REntity", "X"), false, RPropertyAttributes::Geometry);
    RImageEntity::PropertyUY.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "U"), QT_TRANSLATE_NOOP("REntity", "Y"), false, RPropertyAttributes::Geometry);

    RImageEntity::PropertyVX.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "V"), QT_TRANSLATE_NOOP("REntity", "X"), false, RPropertyAttributes::Geometry);
    RImageEntity::PropertyVY.generateId(RImageEntity::getRtti(), QT_TRANSLATE_NOOP("REntity", "V"), QT_TRANSLATE_NOOP("REntity", "Y"), false, RPropertyAttributes::Geometry);

    RImageEntity::PropertyScaleFactorX.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "Width Factor"), false, RPropertyAttributes::Geometry);
    RImageEntity::PropertyScaleFactorY.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "Height Factor"), false, RPropertyAttributes::Geometry);

    RImageEntity::PropertyWidth.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "Width"), false, RPropertyAttributes::Geometry);
    RImageEntity::PropertyHeight.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "Height"), false, RPropertyAttributes::Geometry);

    RImageEntity::PropertyAngle.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "Angle"), false, RPropertyAttributes::Geometry);

    RImageEntity::PropertyFade.generateId(RImageEntity::getRtti(), "", QT_TRANSLATE_NOOP("REntity", "Fade"));
}

bool RImageEntity::setProperty(RPropertyTypeId propertyTypeId,
    const QVariant& value, RTransaction* transaction) {

    bool ret = REntity::setProperty(propertyTypeId, value, transaction);

    if (PropertyFileName == propertyTypeId) {
        data.fileName = value.toString();
        data.reload();
        ret = true;
    }

    ret = ret || RObject::setMember(data.insertionPoint.x, value, PropertyInsertionPointX == propertyTypeId);
    ret = ret || RObject::setMember(data.insertionPoint.y, value, PropertyInsertionPointY == propertyTypeId);
    ret = ret || RObject::setMember(data.insertionPoint.z, value, PropertyInsertionPointZ == propertyTypeId);

    ret = ret || RObject::setMember(data.uVector.x, value, PropertyUX == propertyTypeId);
    ret = ret || RObject::setMember(data.uVector.y, value, PropertyUY == propertyTypeId);

    ret = ret || RObject::setMember(data.vVector.x, value, PropertyVX == propertyTypeId);
    ret = ret || RObject::setMember(data.vVector.y, value, PropertyVY == propertyTypeId);

    if (PropertyScaleFactorX == propertyTypeId) {
        double s = fabs(value.toDouble());
        if (s<RS::PointTolerance) {
            return false;
        }
        data.uVector.setMagnitude2D(s);
        return true;
    }
    if (PropertyScaleFactorY == propertyTypeId) {
        double s = fabs(value.toDouble());
        if (s<RS::PointTolerance) {
            return false;
        }
        data.vVector.setMagnitude2D(s);
        return true;
    }
    if (PropertyWidth == propertyTypeId) {
        double w = fabs(value.toDouble());
        data.setWidth(w, true);
        return true;
    }
    if (PropertyHeight == propertyTypeId) {
        double h = fabs(value.toDouble());
        data.setHeight(h, true);
        return true;
    }
    if (PropertyAngle == propertyTypeId) {
        data.uVector.setAngle(value.toDouble());
        data.vVector.setAngle(value.toDouble() + M_PI/2);
        return true;
    }
    ret = ret || RObject::setMember(data.fade, value, PropertyFade == propertyTypeId);

    return ret;
}


QPair<QVariant, RPropertyAttributes> RImageEntity::getProperty(
        RPropertyTypeId& propertyTypeId, bool humanReadable, bool noAttributes, bool showOnRequest) {

    if (propertyTypeId == PropertyFileName) {
        return qMakePair(QVariant(data.fileName), RPropertyAttributes());
    }

    else if (propertyTypeId == PropertyInsertionPointX) {
        return qMakePair(QVariant(data.insertionPoint.x), RPropertyAttributes());
    } else if (propertyTypeId == PropertyInsertionPointY) {
        return qMakePair(QVariant(data.insertionPoint.y), RPropertyAttributes());
    } else if (propertyTypeId == PropertyInsertionPointZ) {
        return qMakePair(QVariant(data.insertionPoint.z), RPropertyAttributes());
    }

    else if (propertyTypeId == PropertyUX) {
        return qMakePair(QVariant(data.uVector.x), RPropertyAttributes(RPropertyAttributes::Invisible));
    } else if (propertyTypeId == PropertyUY) {
        return qMakePair(QVariant(data.uVector.y), RPropertyAttributes(RPropertyAttributes::Invisible));
    } else if (propertyTypeId == PropertyVX) {
        return qMakePair(QVariant(data.vVector.x), RPropertyAttributes(RPropertyAttributes::Invisible));
    } else if (propertyTypeId == PropertyVY) {
        return qMakePair(QVariant(data.vVector.y), RPropertyAttributes(RPropertyAttributes::Invisible));
    }

    else if (propertyTypeId == PropertyScaleFactorX) {
        return qMakePair(QVariant(data.uVector.getMagnitude()), RPropertyAttributes(RPropertyAttributes::Redundant|RPropertyAttributes::UnitLess));
    } else if (propertyTypeId == PropertyScaleFactorY) {
        return qMakePair(QVariant(data.vVector.getMagnitude()), RPropertyAttributes(RPropertyAttributes::Redundant|RPropertyAttributes::UnitLess));
    }

    else if (propertyTypeId == PropertyWidth) {
        return qMakePair(QVariant(data.uVector.getMagnitude() * data.getImage().width()), RPropertyAttributes(RPropertyAttributes::Redundant));
    } else if (propertyTypeId == PropertyHeight) {
        return qMakePair(QVariant(data.vVector.getMagnitude() * data.getImage().height()), RPropertyAttributes(RPropertyAttributes::Redundant));
    }

    else if (propertyTypeId == PropertyAngle) {
        return qMakePair(QVariant(data.uVector.getAngle()), RPropertyAttributes(RPropertyAttributes::Angle|RPropertyAttributes::Redundant));
    }

    else if (propertyTypeId == PropertyFade) {
        return qMakePair(QVariant(data.fade), RPropertyAttributes(RPropertyAttributes::Percentage));
    }

    return REntity::getProperty(propertyTypeId, humanReadable, noAttributes, showOnRequest);
}


void RImageEntity::exportEntity(RExporter& e, bool preview, bool forceSelected) const {
    Q_UNUSED(preview);

    e.exportImage(data, forceSelected);
}

void RImageEntity::print(QDebug dbg) const {
    dbg.nospace() << "RImageEntity(";
    REntity::print(dbg);
    dbg.nospace() << ", fileName: " << data.fileName
                  << ", uVector: " << data.uVector
                  << ", vVector: " << data.vVector
                  << ", insertionPoint: " << data.insertionPoint;
    dbg.nospace() << ")";
}
