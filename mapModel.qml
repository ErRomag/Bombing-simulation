import QtQuick 2.5
import QtQuick.Window 2.0

import QtQml.Models 2.1

import Backend 1.0

Window {
    id: mapWindow
    visible: true

    property  int n: 0
    property int mapWindowWidth: 700
    property int mapWindowHeight: 600

    property int maxNumberElement: backend.maxNumberElementX()

    // property alias listModel: list

    width: mapWindowWidth
    minimumWidth:mapWindowWidth
    maximumWidth: mapWindowWidth

    height: mapWindowHeight
    maximumHeight: mapWindowHeight
    minimumHeight: mapWindowHeight

    modality: Qt.ApplicationModal

    x:50
    y:50

    title: qsTr("Реализация моделирования")

    ObjectModel{

        id:list
    }

    ObjectModel{

        id:listEllipse
    }

    Image {
        anchors.fill: parent
        id: backgroundCanvas
        source: "qrc:/backgroundCanvas.jpg"
    }


    function  createPole(){
        deletBombRect();

        //clearVectorXYColor();
        //console.log("--------------------------",maxNumberElement)
        var rectBomb = Qt.createComponent("qrc:/bombRect.qml"); // элемент - квадрат

        for (var i = 0; i < maxNumberElement; i++) {

            var component = rectBomb.createObject(mapWindow);
            component.x = backend.VectCoordX[i];
            component.y = backend.VectCoordY[i];

            if (backend.VectorColor[i] === 7) {
                component.color="white"  // если не попал, то зеленый
            } else {
                component.color="red"
            }

            //console.log(backend.VectorColor[i]);
            //console.log(list.count);

            //component.x =(component.heigt*i)+20*i;
            //component.y= (component.width*i)+20*i;
            //component.color="blue"
            list.append(component);
        }
    }

    function createEllipse() {
        deletEllipse()

        var rectEllipse = Qt.createComponent("qrc:/Ellipse.qml"); // элемент - эллипс

        for (var i = 0; i < 3; i++) {

            var component = rectEllipse.createObject(mapWindow);
            component.x = backend.VectorEllipse[i][0];
            component.y = backend.VectorEllipse[i][1];
            component.width = backend.VectorEllipse[i][2];
            component.height = backend.VectorEllipse[i][3];
            console.log(component.x, component.y)


            // x backend.VectorEllipse.at(i).at(0)
            // y backend.VectorEllipse.at(i).at(1)
            // a backend.VectorEllipse.at(i).at(2)
            // b backend.VectorEllipse.at(i).at(3)

            //console.log(backend.VectorColor[i]);
            //console.log(list.count);

            //component.x =(component.heigt*i)+20*i;
            //component.y= (component.width*i)+20*i;
            //component.color="blue"
            listEllipse.append(component);
        }
    }


    function deletBombRect() {
        console.log("start deletBombRect()")
        for (var k = 0; k < list.count; k++) {
            list.get(k).destroy();
        }
        list.clear();
    }

    function deletEllipse() {
        console.log("start deletEllipse()()")
        for (var n = 0; n < listEllipse.count; n++) {
            listEllipse.get(n).destroy();
        }
        listEllipse.clear();
    }

    // -------------------  Отрисовка кабелей между ФЭ ЗРК  -------------------

    Rectangle { // Кабель от вышестоящего звена до ЭГ
        id: cableZvenoToEg
        x: 0
        y: 280
        height: 4
        width: 90
        color: "#7FFF00"
        antialiasing: true
    }

    Rectangle { // Кабель от ЭГ до РЛС
        id: cableEGtoRLS
        x: 135
        y: 65
        height: 213
        width: 4
        color: "#7FFF00"
        rotation: 20
        antialiasing: true
    }

    Rectangle { // Кабель от ЭГ до РЛВ
        id: cableEGtoRLV
        x: 118
        y: 290
        height: 213
        width: 4
        color: "#7FFF00"
        rotation: -11
        antialiasing: true
    }

    Rectangle { // Кабель от ЭГ до КП
        id: cableEGtoCP
        x: 115
        y: 285
        height: 4
        width: 180
        color: "#7FFF00"
        rotation: 2
        antialiasing: true
    }

    Rectangle { // Кабель от РЛС до КП
        id: cableRLStoCP
        x: 110
        y: 170
        height: 4
        width: 250
        color: "#7FFF00"
        rotation: 66
        antialiasing: true
    }

    Rectangle { // Кабель от РЛВ до КП
        id: cableRLVtoCP
        x: 92
        y: 400
        height: 4
        width: 250
        color: "#7FFF00"
        rotation: -59
        antialiasing: true
    }

    Rectangle { // Кабель от КП до КП1
        id: cableCPtoCP1
        x: 248
        y: 200
        height: 4
        width: 230
        color: "#7FFF00"
        rotation: -45
        antialiasing: true
    }

    Rectangle { // Кабель от КП1 до ЭГ1
        id: cableCP1toEG1
        x: 430
        y: 80
        height: 4
        width: 140
        color: "#7FFF00"
        rotation: -26
        antialiasing: true
    }

    Rectangle { // Кабель от КП1 до ПУ1
        id: cableCP1toSC1
        x: 410
        y: 170
        height: 4
        width: 120
        color: "#7FFF00"
        rotation: 62
        antialiasing: true
    }

    Rectangle { // Кабель от ПУ1 до ПУ2
        id: cableSC1toSC2
        x: 410
        y: 295
        height: 4
        width: 120
        color: "#7FFF00"
        rotation: 110
        antialiasing: true
    }

    Rectangle { // Кабель от ПУ2 до ПУ3
        id: cableSC2toSC3
        x: 440
        y: 400
        height: 4
        width: 140
        color: "#7FFF00"
        rotation: 42
        antialiasing: true
    }

    Rectangle { // Кабель от КП до КП2
        id: cableCPtoCP2
        x: 190
        y: 380
        height: 4
        width: 205
        color: "#7FFF00"
        rotation: 83
        antialiasing: true
    }

    Rectangle { // Кабель от КП до КП2
        id: cableCP2toEG2
        x: 315
        y: 520
        height: 4
        width: 180
        color: "#7FFF00"
        rotation: 13
        antialiasing: true
    }

    Rectangle { // Кабель от КП до КП2
        id: cableCP2toSU2
        x: 315
        y: 470
        height: 4
        width: 240
        color: "#7FFF00"
        rotation: -10
        antialiasing: true
    }


    // -------------------  Отрисовка ФЭ ЗРК  -------------------

    Rectangle {
        id:objectEGU
        objectName: "objectEGU"
        x: 90
        y: 270
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 0
    }

    Text {
        id: textObjectEGU
        x:120
        y:265
        color: "#FFFFF0"
        text: qsTr("ЭГ")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectRLS
        objectName: "objectRLS"
        x: 170
        y: 50
        width: 25
        height: 25
        //color: "green"
        //color: "#7FFF00";
        color: backend.ColorRLS
        antialiasing: true
        rotation: 35
    }

    Text {
        id: textObjectRLS
        x:205
        y:50
        color: "#FFFFF0"
        text: qsTr("РЛС")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectRLV
        objectName: "objectRLV"
        x: 130
        y: 500
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 81
    }

    Text {
        id: textObjectRLV
        x: 160
        y: 500
        color: "#FFFFF0"
        text: qsTr("РЛВ")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectKP
        objectName: "objectKP"
        x: 270
        y: 280
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 8
    }

    Text {
        id: textObjectKP
        x:300
        y:285
        color: "#FFFFF0"
        text: qsTr("КП")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectEG1
        objectName: "objectEG1"
        x: 540
        y: 40
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 32
    }

    Text {
        id: textObjectEG1
        x:575
        y:45
        color: "#FFFFF0"
        text: qsTr("ЭГ-1")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectKP1
        objectName: "objectKP1"
        x: 420
        y: 110
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 15
    }

    Text {
        id: textObjectKP1
        x:450
        y:115
        color: "#FFFFF0"
        text: qsTr("КП-1")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectSU1
        objectName: "objectSU1"
        x: 480
        y: 220
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 20
    }

    Text {
        id: textObjectSU1
        x: 510
        y: 230
        color: "#FFFFF0"
        text: qsTr("СУ-1")
        font.pixelSize: 14
    }


    Rectangle {
        id:objectSU2
        objectName: "objectSU2"
        x: 440
        y: 350
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 0
    }

    Text {
        id: textObjectSU2
        x: 470
        y: 355
        color: "#FFFFF0"
        text: qsTr("СУ-2")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectSU3
        objectName: "objectSU3"
        x: 550
        y: 440
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 130
    }

    Text {
        id: textObjectSU3
        x: 585
        y: 450
        color: "#FFFFF0"
        text: qsTr("СУ-3")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectKP2
        objectName: "objectKP2"
        x: 300
        y: 480
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 41
    }

    Text {
        id: textObjectKP2
        x: 335
        y: 490
        color: "#FFFFF0"
        text: qsTr("КП-2")
        font.pixelSize: 14
    }

    Rectangle {
        id:objectEG2
        objectName: "objectEG2"
        x: 490
        y: 530
        width: 25
        height: 25
        color: "#7FFF00";
        antialiasing: true
        rotation: 13
    }

    Text {
        id: textObjectEG2
        x: 520
        y: 535
        color: "#FFFFF0"
        text: qsTr("ЭГ-2")
        font.pixelSize: 14
    }


    //    Rectangle {
    //        id: line
    //        property real x1: 10
    //        property real y1: 220

    //        property real x2: 170
    //        property real y2: 50

    //        color: "#FFFFF0"
    //        height: 1
    //        smooth: true;

    //        x: x1
    //        y: y1

    //        transformOrigin: Item.Left;

    //        width: getWidth(x1, y1, x2, y2);
    //        rotation: getSlope(x1, y1, x2, y2);

    //        function getWidth(sx1, sy1, sx2, sy2)
    //        {
    //            var w = Math.sqrt(Math.pow((sx2 - sx1), 2) + Math.pow((sy2 - sy1), 2));
    //            return w;
    //        }

    //        function getSlope(sx1,sy1,sx2,sy2)
    //        {
    //            var a, m, d;
    //            var b = sx2 - sx1;
    //            if (b === 0) {
    //                x = x + height
    //                return 90;
    //            }
    //            a = sy2 - sy1;
    //            m = a / b;
    //            d = Math.atan(m) * 180 / Math.PI;

    //            if (a < 0 && b < 0)
    //                return d + 180;
    //            else if (a >= 0 && b >= 0)
    //                return d;
    //            else if (a < 0 && b >= 0)
    //                return d;
    //            else if (a >= 0 && b < 0)
    //                return d + 180;
    //            else
    //                return 0;
    //        }

    //    }

}

