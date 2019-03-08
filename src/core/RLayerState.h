/**
 * Copyright (c) 2019 by Andrew Mustun. All rights reserved.
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

#ifndef RLAYERSTATE_H
#define RLAYERSTATE_H

#include "core_global.h"

#include "RLayer.h"
#include "RObject.h"

class RDocument;

/**
 * Represents a layer state (state of list of layers) in a drawing.
 *
 * \ingroup core
 * \scriptable
 * \sharedPointerSupport
 */
class QCADCORE_EXPORT RLayerState: public RObject {
public:
    static RPropertyTypeId PropertyCustom;
    static RPropertyTypeId PropertyType;
    static RPropertyTypeId PropertyHandle;
    static RPropertyTypeId PropertyProtected;

    static RPropertyTypeId PropertyName;

public:
    RLayerState();

    RLayerState(RDocument* document, const QString& name);

    virtual ~RLayerState();

    static void init();

    virtual RS::EntityType getType() const {
        return RS::ObjectLayerState;
    }

    virtual RLayerState* clone() const;

    virtual QPair<QVariant, RPropertyAttributes> getProperty(
            RPropertyTypeId& propertyTypeId,
            bool humanReadable = false, bool noAttributes = false, bool showOnRequest = false);
    virtual bool setProperty(RPropertyTypeId propertyTypeId,
            const QVariant& value, RTransaction* transaction=NULL);

    virtual bool isSelectedForPropertyEditing();

    QString getName() const {
        return name;
    }

    void setName(const QString& n);

    void addLayer(const QString& layerName, RLayer::LayerFlags layerFlags);

private:
    QString name;
    QMap<QString, RLayer::LayerFlags> layerStates;
};

QCADCORE_EXPORT QDebug operator<<(QDebug dbg, const RLayerState& l);

Q_DECLARE_METATYPE(QSharedPointer<RLayerState>)
Q_DECLARE_METATYPE(QSharedPointer<RLayerState>*)
Q_DECLARE_METATYPE(RLayerState)
Q_DECLARE_METATYPE(RLayerState*)

#endif
