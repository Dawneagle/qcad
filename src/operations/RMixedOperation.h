/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
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

#ifndef RMIXEDOPERATION_H
#define RMIXEDOPERATION_H

#include <QList>
#include <QSharedPointer>
#include <QFlags>

#include "RDocument.h"
#include "RExporter.h"
#include "ROperation.h"
#include "RTransaction.h"
#include "RVector.h"

class RObject;

/**
 * Implementation of an operation that adds, modifies and deletes entities.
 * 
 * \ingroup operations
 * \scriptable
 */
class RMixedOperation: public ROperation {
public:
    enum Mode {
        NoMode = 0x0,
        UseCurrentAttributes = 0x1,
        Delete = 0x2
    };
    Q_DECLARE_FLAGS(Modes, Mode)

public:
    RMixedOperation(bool undoable = true);
    virtual ~RMixedOperation() {
    }

    QSharedPointer<RObject> addObject(const QSharedPointer<RObject>& obj,
        bool useCurrentAttributes = true);
    void deleteObject(const QSharedPointer<RObject>& obj);

    virtual RTransaction apply(RDocument& document, bool preview = false) const;

protected:
    void setMode(RMixedOperation::Modes& modes, RMixedOperation::Mode mode, bool on = true);
    bool getMode(const RMixedOperation::Modes& modes, RMixedOperation::Mode mode) const;

private:
    QList<QPair<QSharedPointer<RObject>, Modes> > list;
};

Q_DECLARE_OPERATORS_FOR_FLAGS(RMixedOperation::Modes)
Q_DECLARE_METATYPE(RMixedOperation::Mode)
Q_DECLARE_METATYPE(RMixedOperation*)

#endif
