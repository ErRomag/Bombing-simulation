import QtQuick 2.0
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.0


ApplicationWindow {
    id: mainWindow
    visible: true

    width: 800
    height: 650
    maximumWidth: 800
    maximumHeight: 650
    x:400
    y:300

    title: "Моделирование бомбометания"

    menuBar: MenuBar {

        Menu {
            title: "О программе"
        }
    }

    Item {
        id:leftItem
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: 400
        //        anchors.left: mainWindow

        GroupBox {
            GridLayout{
                id: leftGridLayot
                columns: 2

                Text {
                    Layout.alignment: Qt.AlignCenter
                    Layout.columnSpan: 2
                    text: qsTr("Характеристики рассеивания")
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Прицельное рассеивание, [м]")
                }

                TextField {
                    id: aimDispersion // Прицельное рассеивание
                    objectName: "aimDispersion"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Техническое рассеивание, [м]")
                }

                TextField {
                    id: technicalDispersion // Техническое рассеивание
                    objectName: "technicalDispersion"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Рассеивание суббоеприпасов, [м]")
                }

                TextField {
                    id: ammunitionDispersion // Рассеивание суббоеприпасов
                    objectName: "ammunitionlDispersion"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    Layout.columnSpan: 2
                    text: qsTr("Режим бомбометания")
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Боевой маршрут центра пары")
                }

                TextField {
                    id: pairCenterCombatRoute // Боевой маршрут центра пары
                    objectName: "pairCenterCombatRoute"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Дальность до траверза КП, [м]")
                }

                TextField {
                    id: rangeToTraverse // Дальность до траверза КП
                    objectName: "rangeToTraverse"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Интервал строя, [м]")
                }

                TextField {
                    id: intervalRegime // Интервал строя
                    objectName: "intervalRegime"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Интервал серии, [м]")
                }

                TextField {
                    id: intervalSeries // Интервал серии
                    objectName: "intervalSeries"
                    width: 250
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Высота бомбометания, [м]")
                }

                TextField {
                    id: bombingAltitude // Высота бомбометания
                    objectName: "bombingAltitude"
                    width: 250
                }


                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Количество АСП, [шт]")
                }

                TextField {
                    id: numberASP // Количество АСП
                    objectName: "bombingAltitude"
                    width: 250
                }

            } // To leftGridLayout
        } // To GrouBox
    }  // To Item

    Item {
        id:centerItem
        anchors.left: leftItem.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: 400

        ColumnLayout {
            spacing: 2

            Text {
                Layout.alignment: Qt.AlignCenter
                text: qsTr("Варианты вооружения")
            }
            GroupBox {
                id: groupBox

                ColumnLayout {
                    ExclusiveGroup { id: tabPositionGroup }
                    RadioButton {
                        text: "Top"
                        checked: true
                        exclusiveGroup: tabPositionGroup
                    }
                    RadioButton {
                        text: "Bottom"
                        exclusiveGroup: tabPositionGroup
                    }
                }
            } // To GroupBox
        }

    }





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





