import QtQuick 2.5
import QtQuick.Window 2.0


Window {
    id: mapWindow
    visible: true

    property int mapWindowWidth: 700
    property int mapWindowHeight: 580

    width: mapWindowWidth
    minimumWidth:mapWindowWidth
    maximumWidth: mapWindowWidth

    height: mapWindowHeight
    maximumHeight: mapWindowHeight
    minimumHeight: mapWindowHeight

    x:50
    y:50

    title: qsTr("2D реализация бомбометания")

    Canvas {
        id: mycanvas
        width: parent.width
        height: parent.height

        Image {
            anchors.fill: parent
            id: backgroundCanvas
            source: "qrc:/backgroundCanvas.jpg"
        }

        Rectangle {
            id:objectEGU
            objectName: "objectEGU"
            x: 10
            y: 220
            width: 25
            height: 25
            color: "yellow";
            border.color: "red"
            border.width: 2
            antialiasing: true;
            rotation: 0

        }


        Rectangle {
            id:objectRLS
            objectName: "objectRLS"
            x: 170
            y: 50
            width: 25
            height: 25
            color: "yellow";
            border.color: "red"
            border.width: 2
            antialiasing: true;
            rotation: 35
        }


        Text {
            id: textObjectRLS
            x:200
            y:50
            color: "white"
            text: qsTr("РЛС")
        }

        Rectangle {
            id:cabel1
            objectName: "cabel1"
            width: 1
            height: 150
            color: "red"
            x:objectEGU.Center
            y:objectEGU.Center
            rotation: 35
        }



    }
}

