import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 800
    height: 650
    title: qsTr("2D моделирование бомбометания")

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
            color: "white";
            border.color: "red"
            border.width: 2
            antialiasing: true;
            rotation: 164
            //radius: width/2;
        }

//        onPaint: {
//            var ctx = getContext("2d");
//            ctx.fillStyle = Qt.rgba(1, 0, 0, 1);
//            ctx.fillRect(0, 0, 100, 100);
//        }

    }
}
