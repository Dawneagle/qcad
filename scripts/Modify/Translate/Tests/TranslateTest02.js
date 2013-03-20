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
// Auto generated by Testing Dashboard
// File        : scripts/Modify/Translate/Tests/TranslateTest02.js
// Timestamp   : 2011-08-16 10:10:49
// Description : moves entities, 4 multiple copies

include('scripts/Developer/TestingDashboard/TdbTest.js');

function TranslateTest02() {
    TdbTest.call(this, 'scripts/Modify/Translate/Tests/TranslateTest02.js');
}

TranslateTest02.prototype = new TdbTest();

TranslateTest02.prototype.test00 = function() {
    qDebug('running TranslateTest02.test00()...');
    this.setUp();
    var w = objectFromPath('MainWindow::CadToolsDock::CadToolBar::MainToolsPanel');
    this.sendMouseEvent(w, QEvent.MouseButtonPress, new QPoint(9, 427), Qt.LeftButton, 1, 0);
    var w = objectFromPath('MainWindow::CadToolsDock::CadToolBar::MainToolsPanel');
    this.sendMouseEvent(w, QEvent.MouseButtonRelease, new QPoint(9, 427), Qt.LeftButton, 0, 0);
    this.importFile('scripts/Modify/Translate/Tests/data/entities.dxf');
    this.setZoom(2.0813704496788006, new RVector(160.055, 63.2973, 0) );
    var p = new RVector(-68.768519, 1.083333);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.triggerCommand('move');
    this.setZoom(2.0813704496788006, new RVector(160.055, 63.2973, 0) );
    var p = new RVector(0.416667, 1.563786);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(2.0813704496788006, new RVector(160.055, 63.2973, 0) );
    var p = new RVector(-25.047325, 78.916667);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.dlgStart();
    this.dlgAppendCode('var map = new Map()');
    this.dlgAppendCode("map.put('DialogOpenedByTdb/groupBox', 'MultipleCopies')");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/NumberOfCopies',  [ 4, 0 ] )");
    this.dlgAppendCode("map.put('DialogOpenedByTdb/UseCurrentAttributes', false)");
    this.dlgAppendCode("WidgetFactory.restoreState(dialog, 'DialogOpenedByTdb', undefined, false, undefined, map)");
    this.dlgEnd();
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(-11.943651, 114.79841);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.MidButton, 4, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.MidButton, 0, 0);
    this.verifyDrawing('TranslateTest02_000.dxf');
    this.tearDown();
    qDebug('finished TranslateTest02.test00()');
};

