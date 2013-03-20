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
// File        : scripts/Draw/Line/Line2P/Tests/LinesSnapOnEntity.js
// Timestamp   : 2011-02-11 13:48:20
// Description : Lines drawn with snap on entity

include('scripts/Developer/TestingDashboard/TdbTest.js');

function LinesSnapOnEntity() {
    TdbTest.call(this, 'scripts/Draw/Line/Line2P/Tests/LinesSnapOnEntity.js');
}

LinesSnapOnEntity.prototype = new TdbTest();

LinesSnapOnEntity.prototype.test00 = function() {
    qDebug('running LinesSnapOnEntity.test00()...');
    this.setUp();
    this.clickOnWidget('MainWindow::MainToolsPanel::LineMenuButton');
    this.clickOnWidget('MainWindow::LineToolsPanel::Line2PButton');
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-20, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(20, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(489, 246), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(489, 246), Qt.RightButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(20, -10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-20, -10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(113, 262), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(113, 262), Qt.RightButton, 0, 0);
    this.clickOnWidget('MainWindow::SnapToolsPanel::SnapOnEntityButton');
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-17.75, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-12.149999999999999, -10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(-5.149999999999999, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(6.250000000000002, -10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.zoomTo(-28.95, -21.449999999999996, 28.950000000000003, 21.450000000000006);
    var p = new RVector(16.25, 10);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(474, 167), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(474, 167), Qt.RightButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(248, 199), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(248, 199), Qt.RightButton, 0, 0);
    this.verifyDrawing('LinesSnapOnEntity_000.dxf');
    this.tearDown();
    qDebug('finished LinesSnapOnEntity.test00()');
};

