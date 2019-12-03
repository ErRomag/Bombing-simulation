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



    Image {
        anchors.fill: parent
        id: backgroundCanvas
        source: "qrc:/backgroundCanvas.jpg"
    }


    function  createPole(){
        //console.log("--------------------------",maxNumberElement)
        var rectBomb = Qt.createComponent("qrc:/bombRect.qml"); // элемент - квадрат

        for (var i = 0; i < maxNumberElement; i++) {

            var component = rectBomb.createObject(mapWindow);
            component.x = backend.VectCoordX[i];
            component.y = backend.VectCoordY[i];
            //console.log(backend.VectCoordX[i]);
            //component.x =(component.heigt*i)+20*i;
            //component.y= (component.width*i)+20*i;
            component.color="blue"
            list.append(component);
        }
    }

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
        y:275
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
        color: "#7FFF00";
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

    //    Rectangle {
    //        id: cableEGtoRLS
    //        x: 135
    //        y: 65
    //        height: 213
    //        width: 10
    //        rotation: 20
    //        border.color: "green"
    //        border.width: 3
    //        antialiasing: true
    //        opacity:0.5

    //    }
    Item{
        id: cableEGtoRLS
        x: 135
        y: 65
        height: 213
        width: 10
        rotation: 20
        antialiasing: true

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

