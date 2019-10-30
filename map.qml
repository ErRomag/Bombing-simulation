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
        id: line
        property real x1: 10
        property real y1: 220

        property real x2: 170
        property real y2: 50

        color: "red"
        height: 1
        smooth: true;

        x: x1
        y: y1

        transformOrigin: Item.Left;

        width: getWidth(x1, y1, x2, y2);
        rotation: getSlope(x1, y1, x2, y2);

        function getWidth(sx1, sy1, sx2, sy2)
        {
            var w = Math.sqrt(Math.pow((sx2 - sx1), 2) + Math.pow((sy2 - sy1), 2));
            return w;
        }

        function getSlope(sx1,sy1,sx2,sy2)
        {
            var a, m, d;
            var b = sx2 - sx1;
            if (b === 0) {
                x = x + height
                return 90;
            }
            a = sy2 - sy1;
            m = a / b;
            d = Math.atan(m) * 180 / Math.PI;

            if (a < 0 && b < 0)
                return d + 180;
            else if (a >= 0 && b >= 0)
                return d;
            else if (a < 0 && b >= 0)
                return d;
            else if (a >= 0 && b < 0)
                return d + 180;
            else
                return 0;
        }

}

}

