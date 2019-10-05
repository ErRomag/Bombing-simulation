import QtQuick 2.5
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1
import QtQuick.Controls 2.0


Window {

    visible: true
    width: 800
    height: 650
    title: "Моделирование бомбометания"



    ColumnLayout {
        id: mainLayout
        anchors.fill: parent

        Button {
            id: openMap
            text: "Открыть карту"
            Layout.fillWidth: true

            onClicked: {
                var component = Qt.createComponent("map.qml");
                var browserWindow = component.createObject(this);
}
        }
    }
}





