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
// File        : scripts/Draw/Line/LineAngle/Tests/LineAngle00.js
// Timestamp   : 2011-02-09 14:44:10
// Description : same length, different angles, input mouse clicks

include('scripts/Developer/TestingDashboard/TdbTest.js');

function LineAngle00() {
    TdbTest.call(this, 'scripts/Draw/Line/LineAngle/Tests/LineAngle00.js');
}

LineAngle00.prototype = new TdbTest();

LineAngle00.prototype.test00 = function() {
    qDebug('running LineAngle00.test00()...');
    this.setUp();
    this.clickOnWidget('MainWindow::MainToolsPanel::LineMenuButton');
    this.clickOnWidget('MainWindow::LineToolsPanel::LineAngleButton');
    this.setToolOption('LineAngle/Angle',  [ 0, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 30, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 60, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 90, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 120, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 150, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 180, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 210, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 240, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 270, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 300, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.setToolOption('LineAngle/Angle',  [ 330, 0 ] );
    this.setToolOption('LineAngle/Length',  [ 10, 0 ] );
    this.setToolOption('LineAngle/ReferencePoint', 'Start');
    this.updateToolOptions();
    this.zoomTo(-20.24166666666667, -14.788888888888884, 19.966666666666665, 15.002777777777784);
    var p = new RVector(0, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonPress, p, Qt.LeftButton, 1, 0);
    this.sendMouseEventModelPos(QEvent.MouseButtonRelease, p, Qt.LeftButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(310, 244), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(310, 244), Qt.RightButton, 0, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonPress, new QPoint(310, 244), Qt.RightButton, 2, 0);
    this.sendMouseEventToGv(QEvent.MouseButtonRelease, new QPoint(310, 244), Qt.RightButton, 0, 0);
    this.verifyDrawing('LineAngle00_000.dxf');
    this.tearDown();
    qDebug('finished LineAngle00.test00()');
};

