import QtQuick 2.5
import QtQuick.Window 2.0


Window {
    id: mapWindow
    visible: true
    width: 800
    height: 650
    maximumWidth: 800
    maximumHeight: 650
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
            //anchors.fill: parent;
            x: 50
            y: 50
            width: 25
            height: 25
            color: "yellow";
            border.color: "red"
            border.width: 2
            antialiasing: true;
            rotation: 164
        }

    }
}

