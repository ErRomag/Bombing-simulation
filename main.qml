import QtQuick 2.0
//import QtQuick.Window 2.0
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.0


ApplicationWindow {

    visible: true
    width: 800
    height: 650
    title: "Моделирование бомбометания"

    menuBar: MenuBar {

        Menu {
            title: "О программе"

        }
    }
    Item {
        id:leftItem

        GridLayout{
            id: leftGridLayot
            columns: 2

            //            GridLayout {
            //                id: leftGridLayoutOne
            //                columns: 2
            //                anchors.fill: leftItem

            //                Text {
            //                    text: qsTr("Количество АСП")
            //                }

            //                TextField {
            //                    id: numberASP
            //                    objectName: "numberASP"
            //                    width: 250
            //                }
            //            } // To GridLayout

            Text {
                Layout.alignment: Qt.AlignCenter
                Layout.columnSpan: 2
                text: qsTr("Характеристики рассеивания")
            }


            Text {
                text: qsTr("Прицельное рассеивание, [м]")
            }

            TextField {
                id: aimDispersion // Прицельное рассеивание
                objectName: "aimDispersion"
                width: 250
            }

            Text {
                text: qsTr("Техническое рассеивание, [м]")
            }

            TextField {
                id: technicalDispersion // Техническое рассеивание
                objectName: "technicalDispersion"
                width: 250
            }

            Text {
                text: qsTr("Рассеивание суббоеприпасов, [м]")
            }

            TextField {
                id: ammunitionlDispersion // Рассеивание суббоеприпасов
                objectName: "ammunitionlDispersion"
                width: 250
            }

        }



    }  // To Item

    //    Button {
    //        id: openMap
    //        text: "Открыть карту"
    //        //Layout.fillWidth: true

    //        onClicked: {
    //            var component = Qt.createComponent("map.qml");
    //            var browserWindow = component.createObject(this);
    //        }
    //    }
}





