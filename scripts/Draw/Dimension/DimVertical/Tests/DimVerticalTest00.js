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
// File        : scripts/Draw/Dimension/DimVertical/Tests/DimVerticalTest00.js
// Timestamp   : 2011-04-27 09:41:02
// Description : 

include('scripts/Developer/TestingDashboard/TdbTest.js');

function DimVerticalTest00() {
    TdbTest.call(this, 'scripts/Draw/Dimension/DimVertical/Tests/DimVerticalTest00.js');
}

DimVerticalTest00.prototype = new TdbTest();

DimVerticalTest00.prototype.test00 = function() {
    qDebug('running DimVerticalTest00.test00()...');
    this.setUp();
    this.importFile('scripts/Draw/Dimension/Tests/drawing00.dxf');
    TdbTest.clickOnWidget('MainWindow::CadToolsDock::CadToolBar::MainToolsPanel::DimensionMenuButton');
    TdbTest.clickOnWidget('MainWindow::CadToolsDock::CadToolBar::DimensionToolsPanel::DimVerticalButton');
    this.setToolOption('Dimension/Prefix', '(No prefix)');
    this.setToolOption('Dimension/Text', '');
    this.setToolOption('Dimension/UpperTolerance', '');
    this.setToolOption('Dimension/LowerTolerance', '');
    this.updateToolOptions();
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(6.069136, 37.182447);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(18.813136, 26.948629);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(1.917682, 28.300265);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('Dimension/Prefix', '\u00F8 (Diameter)');
    this.setToolOption('Dimension/Text', '');
    this.setToolOption('Dimension/UpperTolerance', '');
    this.setToolOption('Dimension/LowerTolerance', '');
    this.updateToolOptions();
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(18.813136, 26.948629);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(10.703318, 19.514629);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(-1.944136, 19.997356);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('Dimension/Prefix', '(No prefix)');
    this.setToolOption('Dimension/Text', '1234');
    this.setToolOption('Dimension/UpperTolerance', '0.3');
    this.setToolOption('Dimension/LowerTolerance', '0.04');
    this.updateToolOptions();
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(35.225864, 33.030992);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(31.074409, 19.514629);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(5.70941, -3.77772, 0) );
    var p = new RVector(41.404773, 19.70772);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('Dimension/Prefix', '(No prefix)');
    this.setToolOption('Dimension/Text', '1234567890');
    this.setToolOption('Dimension/UpperTolerance', '');
    this.setToolOption('Dimension/LowerTolerance', '');
    this.updateToolOptions();
    var p = new RVector(26.729864, 24.534992);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.MidButton, 4, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.MidButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(-2.97968, -2.13645, 0) );
    var p = new RVector(24.123136, 14.108083);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(-2.97968, -2.13645, 0) );
    var p = new RVector(30.591682, 19.321538);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setZoom(10.357815442561206, new RVector(-2.97968, -2.13645, 0) );
    var p = new RVector(48.066409, 18.838811);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    var p = new RVector(23.350773, 21.252447);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.RightButton, 2, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.RightButton, 0, 0);
    this.verifyDrawing('DimVerticalTest00_000.dxf');
    this.tearDown();
    qDebug('finished DimVerticalTest00.test00()');
};

