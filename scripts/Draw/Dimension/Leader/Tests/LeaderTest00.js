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
// File        : scripts/Draw/Dimension/Leader/Tests/LeaderTest00.js
// Timestamp   : 2011-04-27 10:19:17
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function LeaderTest00() {
    TdbTest.call(this, 'scripts/Draw/Dimension/Leader/Tests/LeaderTest00.js');
}

LeaderTest00.prototype = new TdbTest();

LeaderTest00.prototype.test00 = function() {
    qDebug('running LeaderTest00.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Dimension/Tests/floor_plan.dxf');
    TdbTest.clickOnWidget('MainWindow::CadToolsDock::CadToolBar::MainToolsPanel::DimensionMenuButton');
    TdbTest.clickOnWidget('MainWindow::CadToolsDock::CadToolBar::DimensionToolsPanel::LeaderButton');
    this.setToolOption('Leader/ArrowHead', 'false');
    this.updateToolOptions();
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(9.647148, 17.263291);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(-0.751848, 20.099381);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(-0.870018, 25.889731);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(9.883489, 8.046);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(0.429857, -0.580439);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(0.311686, -9.915901);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(25.954664, 0.719435);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(33.872081, 19.74487);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(29.499776, 9.936726);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(19.455291, -0.69861);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(8.462355798421374, new RVector(8.07841, 11.8066, 0) );
    var p = new RVector(19.927973, -9.679561);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(44.507417, -1.998484);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('LeaderTest00_000.dxf');
    this.tearDown();
    qDebug('finished LeaderTest00.test00()');
};

