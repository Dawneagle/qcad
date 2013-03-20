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
// File        : scripts/Modify/BreakOut/Tests/BreakOutTest01.js
// Timestamp   : 2011-07-27 16:40:49
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function BreakOutTest01() {
    TdbTest.call(this, 'scripts/Modify/BreakOut/Tests/BreakOutTest01.js');
}

BreakOutTest01.prototype = new TdbTest();

BreakOutTest01.prototype.test00 = function() {
    qDebug('running BreakOutTest01.test00()...');
    this.setUp();
    this.importFile('scripts/Modify/BreakOut/Tests/data/line_arc_circle.dxf');
    TdbTest.clickOnWidget('MainWindow::CadToolsDock::CadToolBar::MainToolsPanel::ModifyMenuButton');
    TdbTest.clickOnWidget('MainWindow::CadToolsDock::CadToolBar::ModifyToolsPanel::BreakOutButton');
    this.setToolOption('BreakOut/RemoveSegment', 'true');
    this.updateToolOptions();
    this.setZoom(11.315068493150683, new RVector(-0.863801, 6.13378, 0) );
    var p = new RVector(23.84201, 26.300847);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(11.315068493150683, new RVector(-0.863801, 6.13378, 0) );
    var p = new RVector(22.339588, 22.854116);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(11.315068493150683, new RVector(-0.863801, 6.13378, 0) );
    var p = new RVector(21.8977, 10.65799);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(11.315068493150683, new RVector(-0.863801, 6.13378, 0) );
    var p = new RVector(20.306901, -1.007869);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(29.498184, 10.481235);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('BreakOutTest01_000.dxf');
    this.tearDown();
    qDebug('finished BreakOutTest01.test00()');
};

