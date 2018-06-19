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
#include "RAttributeEntity.h"
#include "RExporter.h"

RPropertyTypeId RAttributeEntity::PropertyCustom;
RPropertyTypeId RAttributeEntity::PropertyHandle;
RPropertyTypeId RAttributeEntity::PropertyProtected;
RPropertyTypeId RAttributeEntity::PropertyType;
RPropertyTypeId RAttributeEntity::PropertyBlock;
RPropertyTypeId RAttributeEntity::PropertyLayer;
RPropertyTypeId RAttributeEntity::PropertyLinetype;
RPropertyTypeId RAttributeEntity::PropertyLinetypeScale;
RPropertyTypeId RAttributeEntity::PropertyLineweight;
RPropertyTypeId RAttributeEntity::PropertyColor;
RPropertyTypeId RAttributeEntity::PropertyDisplayedColor;
RPropertyTypeId RAttributeEntity::PropertyDrawOrder;

RPropertyTypeId RAttributeEntity::PropertyPositionX;
RPropertyTypeId RAttributeEntity::PropertyPositionY;
RPropertyTypeId RAttributeEntity::PropertyPositionZ;
RPropertyTypeId RAttributeEntity::PropertyText;
RPropertyTypeId RAttributeEntity::PropertyPlainText;
RPropertyTypeId RAttributeEntity::PropertyTag;
RPropertyTypeId RAttributeEntity::PropertyFontName;
RPropertyTypeId RAttributeEntity::PropertyHeight;
RPropertyTypeId RAttributeEntity::PropertyAngle;
RPropertyTypeId RAttributeEntity::PropertyXScale;
RPropertyTypeId RAttributeEntity::PropertyBold;
RPropertyTypeId RAttributeEntity::PropertyItalic;
RPropertyTypeId RAttributeEntity::PropertyLineSpacingFactor;
RPropertyTypeId RAttributeEntity::PropertyHAlign;
RPropertyTypeId RAttributeEntity::PropertyVAlign;
RPropertyTypeId RAttributeEntity::PropertyInvisible;


RAttributeEntity::RAttributeEntity(RDocument* document, const RAttributeData& data) :
    RTextBasedEntity(document), data(document, data) {
}

RAttributeEntity::~RAttributeEntity() {
}

void RAttributeEntity::init() {
    RAttributeEntity::PropertyCustom.generateId(typeid(RAttributeEntity), RObject::PropertyCustom);
    RAttributeEntity::PropertyHandle.generateId(typeid(RAttributeEntity), RObject::PropertyHandle);
    RAttributeEntity::PropertyProtected.generateId(typeid(RAttributeEntity), RObject::PropertyProtected);
    RAttributeEntity::PropertyType.generateId(typeid(RAttributeEntity), REntity::PropertyType);
    RAttributeEntity::PropertyBlock.generateId(typeid(RAttributeEntity), REntity::PropertyBlock);
    RAttributeEntity::PropertyLayer.generateId(typeid(RAttributeEntity), REntity::PropertyLayer);
    RAttributeEntity::PropertyLinetype.generateId(typeid(RAttributeEntity), REntity::PropertyLinetype);
    RAttributeEntity::PropertyLinetypeScale.generateId(typeid(RAttributeEntity), REntity::PropertyLinetypeScale);
    RAttributeEntity::PropertyLineweight.generateId(typeid(RAttributeEntity), REntity::PropertyLineweight);
    RAttributeEntity::PropertyColor.generateId(typeid(RAttributeEntity), REntity::PropertyColor);
    RAttributeEntity::PropertyDisplayedColor.generateId(typeid(RAttributeEntity), REntity::PropertyDisplayedColor);
    RAttributeEntity::PropertyDrawOrder.generateId(typeid(RAttributeEntity), REntity::PropertyDrawOrder);

    RAttributeEntity::PropertyPositionX.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyPositionX);
    RAttributeEntity::PropertyPositionY.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyPositionY);
    RAttributeEntity::PropertyPositionZ.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyPositionZ);
    RAttributeEntity::PropertyText.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyText);
    RAttributeEntity::PropertyPlainText.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyPlainText);
    RAttributeEntity::PropertyFontName.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyFontName);
    RAttributeEntity::PropertyHeight.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyHeight);
    RAttributeEntity::PropertyAngle.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyAngle);
    RAttributeEntity::PropertyXScale.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyXScale);
    RAttributeEntity::PropertyBold.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyBold);
    RAttributeEntity::PropertyItalic.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyItalic);
    RAttributeEntity::PropertyLineSpacingFactor.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyLineSpacingFactor);
    RAttributeEntity::PropertyHAlign.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyHAlign);
    RAttributeEntity::PropertyVAlign.generateId(typeid(RAttributeEntity), RTextBasedEntity::PropertyVAlign);

    RAttributeEntity::PropertyTag.generateId(typeid(RAttributeEntity), "", QT_TRANSLATE_NOOP("REntity", "Tag"));
    RAttributeEntity::PropertyInvisible.generateId(typeid(RAttributeEntity), "", QT_TRANSLATE_NOOP("REntity", "Invisible"));
}

bool RAttributeEntity::setProperty(RPropertyTypeId propertyTypeId,
        const QVariant& value, RTransaction* transaction) {
    bool ret = RTextBasedEntity::setProperty(propertyTypeId, value, transaction);

    ret = ret || RObject::setMember(data.tag, value, PropertyTag == propertyTypeId);
    ret = ret || RObject::setMember(data.invisible, value, PropertyInvisible == propertyTypeId);

    if (ret) {
        data.update();
    }
    return ret;
}

QPair<QVariant, RPropertyAttributes> RAttributeEntity::getProperty(
        RPropertyTypeId& propertyTypeId, bool humanReadable, bool noAttributes, bool showOnRequest) {

    if (propertyTypeId == PropertyTag) {
        return qMakePair(QVariant(data.tag), RPropertyAttributes());
    }
    else if (propertyTypeId == PropertyInvisible) {
        return qMakePair(QVariant(data.invisible), RPropertyAttributes());
    }
    else if (propertyTypeId == PropertyText || propertyTypeId == PropertyPlainText) {
        // add custom property title for use by parent (block reference):
        propertyTypeId.setCustomPropertyTitle("Attributes");
        propertyTypeId.setCustomPropertyName(getTag());
        return qMakePair(
            QVariant(data.text),
            RPropertyAttributes(
                RPropertyAttributes::VisibleToParent |
                (propertyTypeId==PropertyPlainText ? RPropertyAttributes::ReadOnly : RPropertyAttributes::NoOptions))
        );
    }

    return RTextBasedEntity::getProperty(propertyTypeId, humanReadable, noAttributes);
}

bool RAttributeEntity::isVisible() const {
    // delegate attribute visibility to block reference:
    // only show block attributes of visible blocks:
    if (RSettings::getHideAttributeWithBlock()) {
        REntity::Id blockRefId = getParentId();
        const RDocument* document = getDocument();
        if (document!=NULL) {
            RLayer::Id layer0Id = document->getLayer0Id();
            bool onLayer0 = getLayerId()==layer0Id;
            QSharedPointer<REntity> parentEntity = document->queryEntityDirect(blockRefId);
            QSharedPointer<RBlockReferenceEntity> blockRef = parentEntity.dynamicCast<RBlockReferenceEntity>();
            if (!blockRef.isNull()) {
                bool blockRefOnLayer0 = blockRef->getLayerId()==layer0Id;
                // delegate visibility of block attribute to block reference:
                if (onLayer0) {
                    if (blockRefOnLayer0) {
                        QSharedPointer<RLayer> layer0 = document->queryLayerDirect(getLayerId());
                        if (!layer0.isNull() && layer0->isOff()) {
                            return false;
                        }
                    }
                    else {
                        QSharedPointer<RLayer> layer = document->queryLayerDirect(blockRef->getLayerId());
                        if (!layer.isNull() && layer->isOff()) {
                            return false;
                        }
                    }
                    return blockRef->isVisible();
                }
                else if (!blockRef->isVisible()) {
                    return false;
                }
            }
        }
    }

    return REntity::isVisible();
}

void RAttributeEntity::exportEntity(RExporter& e, bool preview, bool forceSelected) const {
    Q_UNUSED(e);
    Q_UNUSED(preview);
    Q_UNUSED(forceSelected);

    // TODO:
    // export attributes as part of the block reference, repeat for array

    if (!isInvisible()) {
        if (e.isTextRenderedAsText()) {
            QList<RPainterPath> paths = e.exportText(getData(), forceSelected);
            e.exportPainterPaths(paths);
        }
        else {
            e.exportPainterPathSource(getData());
        }
    }
}

void RAttributeEntity::print(QDebug dbg) const {
    dbg.nospace() << "RAttributeEntity(";
    REntity::print(dbg);
    dbg.nospace() << ", alignmentPoint: " << getAlignmentPoint()
                  << ", position: " << getPosition()
                  << ", text: " << getPlainText()
                  << ", tag: " << getTag()
                  << ", block reference ID: " << getParentId()
                  << ", textHeight: " << getTextHeight()
                  << ", textWidth: " << getTextWidth()
                  << ", drawingDirection: " << getDrawingDirection()
                  << ")";
}
