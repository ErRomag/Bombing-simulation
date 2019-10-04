import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.5


Window {

    visible: true
    width: 800
    height: 650
    title: "Моделирование бомбометания"

    ColumnLayout {
        id: mainLayout
        anchors.fill: parent

        Button {
            id: authorizationLauncher
            text: "Открыть карту"
            Layout.fillWidth: true

            onClicked: {
                var component = Qt.createComponent("map.qml");
                var browserWindow = component.createObject(this);
            }
        }
    }
}





