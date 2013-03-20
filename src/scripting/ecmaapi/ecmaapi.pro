include( ../../../shared.pri )
TEMPLATE = lib
CONFIG += plugin
TARGET = qcadecmaapi
LIBS += -L3652PWD/3652ROUTDIR -ldxflib -lopennurbs -lqcadcore -lqcaddxf -lqcadentity -lqcadgrid -lqcadgui -lqcadoperations -lqcadsnap -lqcadspatialindex -lqcadstemmer -lspatialindexnavel -lstemmer
CONFIG -= warn_on
CONFIG += warn_off
OTHER_FILES += ecmaapi.dox
HEADERS += ../REcmaHelper.h
SOURCES += ../REcmaHelper.cpp
HEADERS += REcmaAction.h
HEADERS += REcmaActionAdapter.h
HEADERS += REcmaAddObjectOperation.h
HEADERS += REcmaAddObjectsOperation.h
HEADERS += REcmaArc.h
HEADERS += REcmaArcData.h
HEADERS += REcmaArcEntity.h
HEADERS += REcmaBlock.h
HEADERS += REcmaBlockListener.h
HEADERS += REcmaBlockListenerAdapter.h
HEADERS += REcmaBlockReferenceData.h
HEADERS += REcmaBlockReferenceEntity.h
HEADERS += REcmaBox.h
HEADERS += REcmaChangePropertyOperation.h
HEADERS += REcmaCharacterWidget.h
HEADERS += REcmaCircle.h
HEADERS += REcmaCircleData.h
HEADERS += REcmaCircleEntity.h
HEADERS += REcmaClipboardOperation.h
HEADERS += REcmaCloseCurrentEvent.h
HEADERS += REcmaColor.h
HEADERS += REcmaColorCombo.h
HEADERS += REcmaCommandEvent.h
HEADERS += REcmaCommandLine.h
HEADERS += REcmaCoordinateEvent.h
HEADERS += REcmaCoordinateListener.h
HEADERS += REcmaCoordinateListenerAdapter.h
HEADERS += REcmaCopyOperation.h
HEADERS += REcmaDebug.h
HEADERS += REcmaDeleteAllEntitiesOperation.h
HEADERS += REcmaDeleteObjectOperation.h
HEADERS += REcmaDeleteObjectsOperation.h
HEADERS += REcmaDeleteSelectionOperation.h
HEADERS += REcmaDimAlignedData.h
HEADERS += REcmaDimAlignedEntity.h
HEADERS += REcmaDimAngularData.h
HEADERS += REcmaDimAngularEntity.h
HEADERS += REcmaDimDiametricData.h
HEADERS += REcmaDimDiametricEntity.h
HEADERS += REcmaDimLinearData.h
HEADERS += REcmaDimLinearEntity.h
HEADERS += REcmaDimOrdinateData.h
HEADERS += REcmaDimOrdinateEntity.h
HEADERS += REcmaDimRadialData.h
HEADERS += REcmaDimRadialEntity.h
HEADERS += REcmaDimRotatedData.h
HEADERS += REcmaDimRotatedEntity.h
HEADERS += REcmaDimensionData.h
HEADERS += REcmaDimensionEntity.h
HEADERS += REcmaDirected.h
HEADERS += REcmaDockWidget.h
HEADERS += REcmaDocument.h
HEADERS += REcmaDocumentInterface.h
HEADERS += REcmaDxfImporter.h
HEADERS += REcmaEllipse.h
HEADERS += REcmaEllipseData.h
HEADERS += REcmaEllipseEntity.h
HEADERS += REcmaEntity.h
HEADERS += REcmaEntityData.h
HEADERS += REcmaEntityPickEvent.h
HEADERS += REcmaEventFilter.h
HEADERS += REcmaExplodable.h
HEADERS += REcmaExporter.h
HEADERS += REcmaFileCache.h
HEADERS += REcmaFileExporter.h
HEADERS += REcmaFileExporterAdapter.h
HEADERS += REcmaFileExporterFactory.h
HEADERS += REcmaFileExporterFactoryAdapter.h
HEADERS += REcmaFileExporterRegistry.h
HEADERS += REcmaFileImporter.h
HEADERS += REcmaFileImporterAdapter.h
HEADERS += REcmaFileImporterRegistry.h
HEADERS += REcmaFileSystemModel.h
HEADERS += REcmaFocusFrame.h
HEADERS += REcmaFocusListener.h
HEADERS += REcmaFocusListenerAdapter.h
HEADERS += REcmaFont.h
HEADERS += REcmaFontChooserWidget.h
HEADERS += REcmaFontDatabase.h
HEADERS += REcmaFontList.h
HEADERS += REcmaGraphicsScene.h
HEADERS += REcmaGraphicsSceneQt.h
HEADERS += REcmaGraphicsView.h
HEADERS += REcmaGraphicsViewGl.h
HEADERS += REcmaGraphicsViewImage.h
HEADERS += REcmaGraphicsViewQt.h
HEADERS += REcmaGrid.h
HEADERS += REcmaGuiAction.h
HEADERS += REcmaHatchData.h
HEADERS += REcmaHatchEntity.h
HEADERS += REcmaHelpBrowser.h
HEADERS += REcmaImageData.h
HEADERS += REcmaImageEntity.h
HEADERS += REcmaImporter.h
HEADERS += REcmaInputEvent.h
HEADERS += REcmaLayer.h
HEADERS += REcmaLayerListener.h
HEADERS += REcmaLayerListenerAdapter.h
HEADERS += REcmaLeaderData.h
HEADERS += REcmaLeaderEntity.h
HEADERS += REcmaLine.h
HEADERS += REcmaLineData.h
HEADERS += REcmaLineEntity.h
HEADERS += REcmaLinetype.h
HEADERS += REcmaLinetypeCombo.h
HEADERS += REcmaLinetypePattern.h
HEADERS += REcmaLinetypePatternMap.h
HEADERS += REcmaLineweight.h
HEADERS += REcmaLineweightCombo.h
HEADERS += REcmaLinkedStorage.h
HEADERS += REcmaListView.h
HEADERS += REcmaListWidget.h
HEADERS += REcmaMainWindow.h
HEADERS += REcmaMainWindowQt.h
HEADERS += REcmaMath.h
HEADERS += REcmaMathLineEdit.h
HEADERS += REcmaMdiChildQt.h
HEADERS += REcmaMemoryStorage.h
HEADERS += REcmaMessageHandler.h
HEADERS += REcmaMixedOperation.h
HEADERS += REcmaModifiedListener.h
HEADERS += REcmaModifyObjectOperation.h
HEADERS += REcmaModifyObjectsOperation.h
HEADERS += REcmaMouseEvent.h
HEADERS += REcmaMoveReferencePointOperation.h
HEADERS += REcmaMoveSelectionOperation.h
HEADERS += REcmaNavigationAction.h
HEADERS += REcmaObject.h
HEADERS += REcmaOperation.h
HEADERS += REcmaOrthoGrid.h
HEADERS += REcmaPainterPath.h
HEADERS += REcmaPainterPathDevice.h
HEADERS += REcmaPainterPathSource.h
HEADERS += REcmaPasteOperation.h
HEADERS += REcmaPattern.h
HEADERS += REcmaPatternLine.h
HEADERS += REcmaPatternList.h
HEADERS += REcmaPatternListImperial.h
HEADERS += REcmaPatternListMetric.h
HEADERS += REcmaPenListener.h
HEADERS += REcmaPenListenerAdapter.h
HEADERS += REcmaPluginInfo.h
HEADERS += REcmaPluginLoader.h
HEADERS += REcmaPoint.h
HEADERS += REcmaPointData.h
HEADERS += REcmaPointEntity.h
HEADERS += REcmaPolyline.h
HEADERS += REcmaPolylineData.h
HEADERS += REcmaPolylineEntity.h
HEADERS += REcmaProgressHandler.h
HEADERS += REcmaPropertyAttributes.h
HEADERS += REcmaPropertyEditor.h
HEADERS += REcmaPropertyEvent.h
HEADERS += REcmaPropertyListener.h
HEADERS += REcmaPropertyTypeId.h
HEADERS += REcmaRestrictHorizontal.h
HEADERS += REcmaRestrictOff.h
HEADERS += REcmaRestrictOrthogonal.h
HEADERS += REcmaRestrictVertical.h
HEADERS += REcmaRuler.h
HEADERS += REcmaRulerQt.h
HEADERS += REcmaRunner.h
HEADERS += REcmaS.h
HEADERS += REcmaScriptAction.h
HEADERS += REcmaSelectionChangedEvent.h
HEADERS += REcmaSelectionListener.h
HEADERS += REcmaSelectionListenerAdapter.h
HEADERS += REcmaSettings.h
HEADERS += REcmaShape.h
HEADERS += REcmaSharedPointerArc.h
HEADERS += REcmaSharedPointerArcEntity.h
HEADERS += REcmaSharedPointerBlock.h
HEADERS += REcmaSharedPointerBlockReferenceEntity.h
HEADERS += REcmaSharedPointerBox.h
HEADERS += REcmaSharedPointerCircle.h
HEADERS += REcmaSharedPointerCircleEntity.h
HEADERS += REcmaSharedPointerDimAlignedEntity.h
HEADERS += REcmaSharedPointerDimAngularEntity.h
HEADERS += REcmaSharedPointerDimDiametricEntity.h
HEADERS += REcmaSharedPointerDimLinearEntity.h
HEADERS += REcmaSharedPointerDimOrdinateEntity.h
HEADERS += REcmaSharedPointerDimRadialEntity.h
HEADERS += REcmaSharedPointerDimRotatedEntity.h
HEADERS += REcmaSharedPointerDimensionEntity.h
HEADERS += REcmaSharedPointerDirected.h
HEADERS += REcmaSharedPointerEllipse.h
HEADERS += REcmaSharedPointerEllipseEntity.h
HEADERS += REcmaSharedPointerEntity.h
HEADERS += REcmaSharedPointerEntityData.h
HEADERS += REcmaSharedPointerExplodable.h
HEADERS += REcmaSharedPointerHatchEntity.h
HEADERS += REcmaSharedPointerImageEntity.h
HEADERS += REcmaSharedPointerLayer.h
HEADERS += REcmaSharedPointerLeaderEntity.h
HEADERS += REcmaSharedPointerLine.h
HEADERS += REcmaSharedPointerLineEntity.h
HEADERS += REcmaSharedPointerLinetype.h
HEADERS += REcmaSharedPointerObject.h
HEADERS += REcmaSharedPointerPainterPathSource.h
HEADERS += REcmaSharedPointerPoint.h
HEADERS += REcmaSharedPointerPointEntity.h
HEADERS += REcmaSharedPointerPolyline.h
HEADERS += REcmaSharedPointerPolylineEntity.h
HEADERS += REcmaSharedPointerShape.h
HEADERS += REcmaSharedPointerSolidEntity.h
HEADERS += REcmaSharedPointerSpline.h
HEADERS += REcmaSharedPointerSplineEntity.h
HEADERS += REcmaSharedPointerTextData.h
HEADERS += REcmaSharedPointerTextEntity.h
HEADERS += REcmaSharedPointerTextLabel.h
HEADERS += REcmaSharedPointerTriangle.h
HEADERS += REcmaSharedPointerUcs.h
HEADERS += REcmaSharedPointerView.h
HEADERS += REcmaShellActionAdapter.h
HEADERS += REcmaShellFileExporterAdapter.h
HEADERS += REcmaShellFileExporterFactoryAdapter.h
HEADERS += REcmaShellFileImporterAdapter.h
HEADERS += REcmaShellFocusListenerAdapter.h
HEADERS += REcmaShellGraphicsViewImage.h
HEADERS += REcmaShellGraphicsViewQt.h
HEADERS += REcmaShellListView.h
HEADERS += REcmaShellListWidget.h
HEADERS += REcmaShellPropertyEditor.h
HEADERS += REcmaShellRunner.h
HEADERS += REcmaShellSnap.h
HEADERS += REcmaShellSnapDistance.h
HEADERS += REcmaShellSnapRestriction.h
HEADERS += REcmaShellSpatialIndexVisitorAdapter.h
HEADERS += REcmaShellViewFocusListenerAdapter.h
HEADERS += REcmaShortcutLineEdit.h
HEADERS += REcmaSnap.h
HEADERS += REcmaSnapAuto.h
HEADERS += REcmaSnapCenter.h
HEADERS += REcmaSnapDistance.h
HEADERS += REcmaSnapEnd.h
HEADERS += REcmaSnapEntityBase.h
HEADERS += REcmaSnapFree.h
HEADERS += REcmaSnapGrid.h
HEADERS += REcmaSnapIntersection.h
HEADERS += REcmaSnapListener.h
HEADERS += REcmaSnapMiddle.h
HEADERS += REcmaSnapOnEntity.h
HEADERS += REcmaSnapPerpendicular.h
HEADERS += REcmaSnapReference.h
HEADERS += REcmaSnapRestriction.h
HEADERS += REcmaSolidData.h
HEADERS += REcmaSolidEntity.h
HEADERS += REcmaSpatialIndex.h
HEADERS += REcmaSpatialIndexNavel.h
HEADERS += REcmaSpatialIndexSimple.h
HEADERS += REcmaSpatialIndexVisitor.h
HEADERS += REcmaSpatialIndexVisitorAdapter.h
HEADERS += REcmaSpline.h
HEADERS += REcmaSplineData.h
HEADERS += REcmaSplineEntity.h
HEADERS += REcmaStemmer.h
HEADERS += REcmaStorage.h
HEADERS += REcmaTabletEvent.h
HEADERS += REcmaTerminateEvent.h
HEADERS += REcmaTextData.h
HEADERS += REcmaTextEdit.h
HEADERS += REcmaTextEntity.h
HEADERS += REcmaTextLabel.h
HEADERS += REcmaTextRenderer.h
HEADERS += REcmaThread.h
HEADERS += REcmaTransaction.h
HEADERS += REcmaTransactionEvent.h
HEADERS += REcmaTransactionListener.h
HEADERS += REcmaTransformation.h
HEADERS += REcmaTranslation.h
HEADERS += REcmaTriangle.h
HEADERS += REcmaUcs.h
HEADERS += REcmaUnit.h
HEADERS += REcmaVector.h
HEADERS += REcmaView.h
HEADERS += REcmaViewFocusListener.h
HEADERS += REcmaViewFocusListenerAdapter.h
HEADERS += REcmaViewListener.h
HEADERS += REcmaViewListenerAdapter.h
HEADERS += REcmaWebView.h
HEADERS += REcmaWheelEvent.h
SOURCES += REcmaAction.cpp
SOURCES += REcmaActionAdapter.cpp
SOURCES += REcmaAddObjectOperation.cpp
SOURCES += REcmaAddObjectsOperation.cpp
SOURCES += REcmaArc.cpp
SOURCES += REcmaArcData.cpp
SOURCES += REcmaArcEntity.cpp
SOURCES += REcmaBlock.cpp
SOURCES += REcmaBlockListener.cpp
SOURCES += REcmaBlockListenerAdapter.cpp
SOURCES += REcmaBlockReferenceData.cpp
SOURCES += REcmaBlockReferenceEntity.cpp
SOURCES += REcmaBox.cpp
SOURCES += REcmaChangePropertyOperation.cpp
SOURCES += REcmaCharacterWidget.cpp
SOURCES += REcmaCircle.cpp
SOURCES += REcmaCircleData.cpp
SOURCES += REcmaCircleEntity.cpp
SOURCES += REcmaClipboardOperation.cpp
SOURCES += REcmaCloseCurrentEvent.cpp
SOURCES += REcmaColor.cpp
SOURCES += REcmaColorCombo.cpp
SOURCES += REcmaCommandEvent.cpp
SOURCES += REcmaCommandLine.cpp
SOURCES += REcmaCoordinateEvent.cpp
SOURCES += REcmaCoordinateListener.cpp
SOURCES += REcmaCoordinateListenerAdapter.cpp
SOURCES += REcmaCopyOperation.cpp
SOURCES += REcmaDebug.cpp
SOURCES += REcmaDeleteAllEntitiesOperation.cpp
SOURCES += REcmaDeleteObjectOperation.cpp
SOURCES += REcmaDeleteObjectsOperation.cpp
SOURCES += REcmaDeleteSelectionOperation.cpp
SOURCES += REcmaDimAlignedData.cpp
SOURCES += REcmaDimAlignedEntity.cpp
SOURCES += REcmaDimAngularData.cpp
SOURCES += REcmaDimAngularEntity.cpp
SOURCES += REcmaDimDiametricData.cpp
SOURCES += REcmaDimDiametricEntity.cpp
SOURCES += REcmaDimLinearData.cpp
SOURCES += REcmaDimLinearEntity.cpp
SOURCES += REcmaDimOrdinateData.cpp
SOURCES += REcmaDimOrdinateEntity.cpp
SOURCES += REcmaDimRadialData.cpp
SOURCES += REcmaDimRadialEntity.cpp
SOURCES += REcmaDimRotatedData.cpp
SOURCES += REcmaDimRotatedEntity.cpp
SOURCES += REcmaDimensionData.cpp
SOURCES += REcmaDimensionEntity.cpp
SOURCES += REcmaDirected.cpp
SOURCES += REcmaDockWidget.cpp
SOURCES += REcmaDocument.cpp
SOURCES += REcmaDocumentInterface.cpp
SOURCES += REcmaDxfImporter.cpp
SOURCES += REcmaEllipse.cpp
SOURCES += REcmaEllipseData.cpp
SOURCES += REcmaEllipseEntity.cpp
SOURCES += REcmaEntity.cpp
SOURCES += REcmaEntityData.cpp
SOURCES += REcmaEntityPickEvent.cpp
SOURCES += REcmaEventFilter.cpp
SOURCES += REcmaExplodable.cpp
SOURCES += REcmaExporter.cpp
SOURCES += REcmaFileCache.cpp
SOURCES += REcmaFileExporter.cpp
SOURCES += REcmaFileExporterAdapter.cpp
SOURCES += REcmaFileExporterFactory.cpp
SOURCES += REcmaFileExporterFactoryAdapter.cpp
SOURCES += REcmaFileExporterRegistry.cpp
SOURCES += REcmaFileImporter.cpp
SOURCES += REcmaFileImporterAdapter.cpp
SOURCES += REcmaFileImporterRegistry.cpp
SOURCES += REcmaFileSystemModel.cpp
SOURCES += REcmaFocusFrame.cpp
SOURCES += REcmaFocusListener.cpp
SOURCES += REcmaFocusListenerAdapter.cpp
SOURCES += REcmaFont.cpp
SOURCES += REcmaFontChooserWidget.cpp
SOURCES += REcmaFontDatabase.cpp
SOURCES += REcmaFontList.cpp
SOURCES += REcmaGraphicsScene.cpp
SOURCES += REcmaGraphicsSceneQt.cpp
SOURCES += REcmaGraphicsView.cpp
SOURCES += REcmaGraphicsViewGl.cpp
SOURCES += REcmaGraphicsViewImage.cpp
SOURCES += REcmaGraphicsViewQt.cpp
SOURCES += REcmaGrid.cpp
SOURCES += REcmaGuiAction.cpp
SOURCES += REcmaHatchData.cpp
SOURCES += REcmaHatchEntity.cpp
SOURCES += REcmaHelpBrowser.cpp
SOURCES += REcmaImageData.cpp
SOURCES += REcmaImageEntity.cpp
SOURCES += REcmaImporter.cpp
SOURCES += REcmaInputEvent.cpp
SOURCES += REcmaLayer.cpp
SOURCES += REcmaLayerListener.cpp
SOURCES += REcmaLayerListenerAdapter.cpp
SOURCES += REcmaLeaderData.cpp
SOURCES += REcmaLeaderEntity.cpp
SOURCES += REcmaLine.cpp
SOURCES += REcmaLineData.cpp
SOURCES += REcmaLineEntity.cpp
SOURCES += REcmaLinetype.cpp
SOURCES += REcmaLinetypeCombo.cpp
SOURCES += REcmaLinetypePattern.cpp
SOURCES += REcmaLinetypePatternMap.cpp
SOURCES += REcmaLineweight.cpp
SOURCES += REcmaLineweightCombo.cpp
SOURCES += REcmaLinkedStorage.cpp
SOURCES += REcmaListView.cpp
SOURCES += REcmaListWidget.cpp
SOURCES += REcmaMainWindow.cpp
SOURCES += REcmaMainWindowQt.cpp
SOURCES += REcmaMath.cpp
SOURCES += REcmaMathLineEdit.cpp
SOURCES += REcmaMdiChildQt.cpp
SOURCES += REcmaMemoryStorage.cpp
SOURCES += REcmaMessageHandler.cpp
SOURCES += REcmaMixedOperation.cpp
SOURCES += REcmaModifiedListener.cpp
SOURCES += REcmaModifyObjectOperation.cpp
SOURCES += REcmaModifyObjectsOperation.cpp
SOURCES += REcmaMouseEvent.cpp
SOURCES += REcmaMoveReferencePointOperation.cpp
SOURCES += REcmaMoveSelectionOperation.cpp
SOURCES += REcmaNavigationAction.cpp
SOURCES += REcmaObject.cpp
SOURCES += REcmaOperation.cpp
SOURCES += REcmaOrthoGrid.cpp
SOURCES += REcmaPainterPath.cpp
SOURCES += REcmaPainterPathDevice.cpp
SOURCES += REcmaPainterPathSource.cpp
SOURCES += REcmaPasteOperation.cpp
SOURCES += REcmaPattern.cpp
SOURCES += REcmaPatternLine.cpp
SOURCES += REcmaPatternList.cpp
SOURCES += REcmaPatternListImperial.cpp
SOURCES += REcmaPatternListMetric.cpp
SOURCES += REcmaPenListener.cpp
SOURCES += REcmaPenListenerAdapter.cpp
SOURCES += REcmaPluginInfo.cpp
SOURCES += REcmaPluginLoader.cpp
SOURCES += REcmaPoint.cpp
SOURCES += REcmaPointData.cpp
SOURCES += REcmaPointEntity.cpp
SOURCES += REcmaPolyline.cpp
SOURCES += REcmaPolylineData.cpp
SOURCES += REcmaPolylineEntity.cpp
SOURCES += REcmaProgressHandler.cpp
SOURCES += REcmaPropertyAttributes.cpp
SOURCES += REcmaPropertyEditor.cpp
SOURCES += REcmaPropertyEvent.cpp
SOURCES += REcmaPropertyListener.cpp
SOURCES += REcmaPropertyTypeId.cpp
SOURCES += REcmaRestrictHorizontal.cpp
SOURCES += REcmaRestrictOff.cpp
SOURCES += REcmaRestrictOrthogonal.cpp
SOURCES += REcmaRestrictVertical.cpp
SOURCES += REcmaRuler.cpp
SOURCES += REcmaRulerQt.cpp
SOURCES += REcmaRunner.cpp
SOURCES += REcmaS.cpp
SOURCES += REcmaScriptAction.cpp
SOURCES += REcmaSelectionChangedEvent.cpp
SOURCES += REcmaSelectionListener.cpp
SOURCES += REcmaSelectionListenerAdapter.cpp
SOURCES += REcmaSettings.cpp
SOURCES += REcmaShape.cpp
SOURCES += REcmaSharedPointerArc.cpp
SOURCES += REcmaSharedPointerArcEntity.cpp
SOURCES += REcmaSharedPointerBlock.cpp
SOURCES += REcmaSharedPointerBlockReferenceEntity.cpp
SOURCES += REcmaSharedPointerBox.cpp
SOURCES += REcmaSharedPointerCircle.cpp
SOURCES += REcmaSharedPointerCircleEntity.cpp
SOURCES += REcmaSharedPointerDimAlignedEntity.cpp
SOURCES += REcmaSharedPointerDimAngularEntity.cpp
SOURCES += REcmaSharedPointerDimDiametricEntity.cpp
SOURCES += REcmaSharedPointerDimLinearEntity.cpp
SOURCES += REcmaSharedPointerDimOrdinateEntity.cpp
SOURCES += REcmaSharedPointerDimRadialEntity.cpp
SOURCES += REcmaSharedPointerDimRotatedEntity.cpp
SOURCES += REcmaSharedPointerDimensionEntity.cpp
SOURCES += REcmaSharedPointerDirected.cpp
SOURCES += REcmaSharedPointerEllipse.cpp
SOURCES += REcmaSharedPointerEllipseEntity.cpp
SOURCES += REcmaSharedPointerEntity.cpp
SOURCES += REcmaSharedPointerEntityData.cpp
SOURCES += REcmaSharedPointerExplodable.cpp
SOURCES += REcmaSharedPointerHatchEntity.cpp
SOURCES += REcmaSharedPointerImageEntity.cpp
SOURCES += REcmaSharedPointerLayer.cpp
SOURCES += REcmaSharedPointerLeaderEntity.cpp
SOURCES += REcmaSharedPointerLine.cpp
SOURCES += REcmaSharedPointerLineEntity.cpp
SOURCES += REcmaSharedPointerLinetype.cpp
SOURCES += REcmaSharedPointerObject.cpp
SOURCES += REcmaSharedPointerPainterPathSource.cpp
SOURCES += REcmaSharedPointerPoint.cpp
SOURCES += REcmaSharedPointerPointEntity.cpp
SOURCES += REcmaSharedPointerPolyline.cpp
SOURCES += REcmaSharedPointerPolylineEntity.cpp
SOURCES += REcmaSharedPointerShape.cpp
SOURCES += REcmaSharedPointerSolidEntity.cpp
SOURCES += REcmaSharedPointerSpline.cpp
SOURCES += REcmaSharedPointerSplineEntity.cpp
SOURCES += REcmaSharedPointerTextData.cpp
SOURCES += REcmaSharedPointerTextEntity.cpp
SOURCES += REcmaSharedPointerTextLabel.cpp
SOURCES += REcmaSharedPointerTriangle.cpp
SOURCES += REcmaSharedPointerUcs.cpp
SOURCES += REcmaSharedPointerView.cpp
SOURCES += REcmaShellActionAdapter.cpp
SOURCES += REcmaShellFileExporterAdapter.cpp
SOURCES += REcmaShellFileExporterFactoryAdapter.cpp
SOURCES += REcmaShellFileImporterAdapter.cpp
SOURCES += REcmaShellFocusListenerAdapter.cpp
SOURCES += REcmaShellGraphicsViewImage.cpp
SOURCES += REcmaShellGraphicsViewQt.cpp
SOURCES += REcmaShellListView.cpp
SOURCES += REcmaShellListWidget.cpp
SOURCES += REcmaShellPropertyEditor.cpp
SOURCES += REcmaShellRunner.cpp
SOURCES += REcmaShellSnap.cpp
SOURCES += REcmaShellSnapDistance.cpp
SOURCES += REcmaShellSnapRestriction.cpp
SOURCES += REcmaShellSpatialIndexVisitorAdapter.cpp
SOURCES += REcmaShellViewFocusListenerAdapter.cpp
SOURCES += REcmaShortcutLineEdit.cpp
SOURCES += REcmaSnap.cpp
SOURCES += REcmaSnapAuto.cpp
SOURCES += REcmaSnapCenter.cpp
SOURCES += REcmaSnapDistance.cpp
SOURCES += REcmaSnapEnd.cpp
SOURCES += REcmaSnapEntityBase.cpp
SOURCES += REcmaSnapFree.cpp
SOURCES += REcmaSnapGrid.cpp
SOURCES += REcmaSnapIntersection.cpp
SOURCES += REcmaSnapListener.cpp
SOURCES += REcmaSnapMiddle.cpp
SOURCES += REcmaSnapOnEntity.cpp
SOURCES += REcmaSnapPerpendicular.cpp
SOURCES += REcmaSnapReference.cpp
SOURCES += REcmaSnapRestriction.cpp
SOURCES += REcmaSolidData.cpp
SOURCES += REcmaSolidEntity.cpp
SOURCES += REcmaSpatialIndex.cpp
SOURCES += REcmaSpatialIndexNavel.cpp
SOURCES += REcmaSpatialIndexSimple.cpp
SOURCES += REcmaSpatialIndexVisitor.cpp
SOURCES += REcmaSpatialIndexVisitorAdapter.cpp
SOURCES += REcmaSpline.cpp
SOURCES += REcmaSplineData.cpp
SOURCES += REcmaSplineEntity.cpp
SOURCES += REcmaStemmer.cpp
SOURCES += REcmaStorage.cpp
SOURCES += REcmaTabletEvent.cpp
SOURCES += REcmaTerminateEvent.cpp
SOURCES += REcmaTextData.cpp
SOURCES += REcmaTextEdit.cpp
SOURCES += REcmaTextEntity.cpp
SOURCES += REcmaTextLabel.cpp
SOURCES += REcmaTextRenderer.cpp
SOURCES += REcmaThread.cpp
SOURCES += REcmaTransaction.cpp
SOURCES += REcmaTransactionEvent.cpp
SOURCES += REcmaTransactionListener.cpp
SOURCES += REcmaTransformation.cpp
SOURCES += REcmaTranslation.cpp
SOURCES += REcmaTriangle.cpp
SOURCES += REcmaUcs.cpp
SOURCES += REcmaUnit.cpp
SOURCES += REcmaVector.cpp
SOURCES += REcmaView.cpp
SOURCES += REcmaViewFocusListener.cpp
SOURCES += REcmaViewFocusListenerAdapter.cpp
SOURCES += REcmaViewListener.cpp
SOURCES += REcmaViewListenerAdapter.cpp
SOURCES += REcmaWebView.cpp
SOURCES += REcmaWheelEvent.cpp
