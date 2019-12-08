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

    x:250
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

    function colorFuncElement() {
        if (backend.FuncElem[0] === false) {
           objectKP.color = "red"
        }
        if (backend.FuncElem[1] === false) {
           objectKP1.color = "red"
        }
        if (backend.FuncElem[2] === false) {
           objectKP2.color = "red"
        }
        if (backend.FuncElem[3] === false) {
            objectRLS.color = "red"
        }
        if (backend.FuncElem[4] === false) {
            objectRLV.color = "red"
        }
        if (backend.FuncElem[5] === false) {
            objectSU1.color = "red"
        }
        if (backend.FuncElem[6] === false) {
            objectSU2.color = "red"
        }
        if (backend.FuncElem[7] === false) {
            objectSU3.color = "red"
        }
        if (backend.FuncElem[8] === false) {
            objectEGU.color = "red"
        }
        if (backend.FuncElem[9] === false) {
            objectEG1.color = "red"
        }
        if (backend.FuncElem[10] === false) {
            objectEG2.color = "red"
        }
        if (backend.FuncElem[11] === false) {
            cableZvenoToEg.color = "red"
        }
        if (backend.FuncElem[12] === false) {
            cableEGtoCP.color = "red"
        }
        if (backend.FuncElem[13] === false) {
            cableEGtoRLS.color = "red"
        }
        if (backend.FuncElem[14] === false) {
            cableEGtoRLV.color = "red"
        }
        if (backend.FuncElem[15] === false) {
            cableRLStoCP.color = "red"
        }
        if (backend.FuncElem[16] === false) {
            cableRLVtoCP.color = "red"
        }
        if (backend.FuncElem[17] === false) {
            cableCPtoCP1.color = "red"
        }
        if (backend.FuncElem[18] === false) {
            cableCPtoCP2.color = "red"
        }
        if (backend.FuncElem[19] === false) {
            cableCP1toEG1.color = "red"
        }
        if (backend.FuncElem[20] === false) {
            cableCP2toEG2.color = "red"
        }
        if (backend.FuncElem[21] === false) {
            cableCP1toSC1.color = "red"
        }
        if (backend.FuncElem[22] === false) {
            cableSC1toSC2.color = "red"
        }
        if (backend.FuncElem[23] === false) {
            cableSC2toSC3.color = "red"
        }
        if (backend.FuncElem[24] === false) {
            cableSC3toCP2.color = "red"
        }

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
            list.append(component);
        }
    }

    function deletBombRect() {
        //console.log("start deletBombRect()")
        for (var k = 0; k < list.count; k++) {
            list.get(k).destroy();
        }
        list.clear();
    }

    function createEllipse() {
        deletEllipse()

        var rectEllipse = Qt.createComponent("qrc:/Ellipse.qml"); // элемент - эллипс

        var component1 = rectEllipse.createObject(mapWindow);

        component1.width = backend.VectorEllipse[2];
        component1.height = backend.VectorEllipse[3];
        component1.x = backend.VectorEllipse[0] - component1.width / 2
        component1.y = backend.VectorEllipse[1] - component1.height / 2
        component1.radius = component1.width / 2
        listEllipse.append(component1);

        var component2 = rectEllipse.createObject(mapWindow);

        component2.width = backend.VectorEllipse[6];
        component2.height = backend.VectorEllipse[7];
        component2.x = backend.VectorEllipse[4] - component2.width / 2
        component2.y = backend.VectorEllipse[5] - component2.height / 2
        component2.radius = component2.width / 2
        listEllipse.append(component2);

        var component3 = rectEllipse.createObject(mapWindow);

        component3.width = backend.VectorEllipse[10];
        component3.height = backend.VectorEllipse[11];
        component3.x = backend.VectorEllipse[8] - component3.width / 2
        component3.y = backend.VectorEllipse[9] - component3.height / 2
        component3.radius = component3.width / 2
        listEllipse.append(component3);

        var component4 = rectEllipse.createObject(mapWindow);

        component4.width = backend.VectorEllipse[14];
        component4.height = backend.VectorEllipse[15];
        component4.x = backend.VectorEllipse[12] - component4.width / 2
        component4.y = backend.VectorEllipse[13] - component4.height / 2
        component4.radius = component4.width / 2
        listEllipse.append(component4)

        console.log(listEllipse.count)
    }


    function deletEllipse() {

        //console.log("start deletEllipse()")
        for (var n = 0; n < listEllipse.count; n++) {
            listEllipse.get(n).destroy();
        }
        listEllipse.clear();

    }


    // -------------------  Отрисовка кабелей между ФЭ ЗРК  -------------------

    Rectangle { // Кабель от вышестоящего звена до ЭГ (12)
        id: cableZvenoToEg
        x: 0
        y: 280
        height: 4
        width: 90
        color: "#7FFF00"
        antialiasing: true
    }

    Rectangle { // Кабель от ЭГ до КП (13)
        id: cableEGtoCP
        x: 115
        y: 285
        height: 4
        width: 180
        color: "#7FFF00"
        rotation: 2
        antialiasing: true
    }

    Rectangle { // Кабель от ЭГ до РЛС (14)
        id: cableEGtoRLS
        x: 135
        y: 65
        height: 213
        width: 4
        color: "#7FFF00"
        rotation: 20
        antialiasing: true
    }

    Rectangle { // Кабель от ЭГ до РЛВ (15)
        id: cableEGtoRLV
        x: 118
        y: 290
        height: 213
        width: 4
        color: "#7FFF00"
        rotation: -11
        antialiasing: true
    }

    Rectangle { // Кабель от РЛС до КП (16)
        id: cableRLStoCP
        x: 110
        y: 170
        height: 4
        width: 250
        color: "#7FFF00"
        rotation: 66
        antialiasing: true
    }

    Rectangle { // Кабель от РЛВ до КП (17)
        id: cableRLVtoCP
        x: 92
        y: 400
        height: 4
        width: 250
        color: "#7FFF00"
        rotation: -59
        antialiasing: true
    }

    Rectangle { // Кабель от КП до КП1 (18)
        id: cableCPtoCP1
        x: 248
        y: 200
        height: 4
        width: 230
        color: "#7FFF00"
        rotation: -45
        antialiasing: true
    }

    Rectangle { // Кабель от КП до КП2 (19)
        id: cableCPtoCP2
        x: 190
        y: 380
        height: 4
        width: 205
        color: "#7FFF00"
        rotation: 83
        antialiasing: true
    }

    Rectangle { // Кабель от КП1 до ЭГ1 (20)
        id: cableCP1toEG1
        x: 430
        y: 80
        height: 4
        width: 140
        color: "#7FFF00"
        rotation: -26
        antialiasing: true
    }

    Rectangle { // Кабель от КП2 до ЭГ2 (21)
        id: cableCP2toEG2
        x: 315
        y: 520
        height: 4
        width: 180
        color: "#7FFF00"
        rotation: 13
        antialiasing: true
    }

    Rectangle { // Кабель от КП1 до CУ1 (22)
        id: cableCP1toSC1
        x: 410
        y: 170
        height: 4
        width: 120
        color: "#7FFF00"
        rotation: 62
        antialiasing: true
    }

    Rectangle { // Кабель от CУ1 до СУ2 (23)
        id: cableSC1toSC2
        x: 410
        y: 295
        height: 4
        width: 120
        color: "#7FFF00"
        rotation: 110
        antialiasing: true
    }

    Rectangle { // Кабель от СУ2 до СУ3 (24)
        id: cableSC2toSC3
        x: 440
        y: 400
        height: 4
        width: 140
        color: "#7FFF00"
        rotation: 42
        antialiasing: true
    }

    Rectangle { // Кабель от СУ3 до КП2 (25)
        id: cableSC3toCP2
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
        color: "#7FFF00"
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

}

