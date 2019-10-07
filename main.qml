//import QtQuick 2.0
//import QtQuick.Layouts 1.1
//import QtQuick.Controls 1.0
//import QtQuick.Dialogs 1.1

import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.1
import QtQuick.Window 2.1



ApplicationWindow {
    id: mainWindow
    visible: true

    width: 800
    height: 350
    maximumWidth: 800
    minimumWidth: 800
    maximumHeight: 350
    minimumHeight: 350
    x:50
    y:50

    title: "Моделирование бомбометания"

    MessageDialog {
        id: aboutBox
        title: "О программе"
        text: "Эта программа моделирует \nбомбардировку двумя самолетами-истрибителями \nзенитного ракетного комплекса"
        icon: StandardIcon.Information
    }

    menuBar: MenuBar {

        Menu {
            id: helpMenu
            title: qsTr("Справка")
            MenuItem {
                text: qsTr("О программе")
                onTriggered: aboutBox.open()
            }
        }
    }



    Item {
        id:leftItem
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: 300
        //        anchors.left: mainWindow

        GroupBox {
            id: leftGroupBox

            GridLayout{
                id: leftGridLayout
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
        width: 300

        GroupBox {
            id: centerGroupBox

            ColumnLayout {
                spacing: 3

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Варианты вооружения")
                }

                GroupBox {
                    id: groupBoxRadioButton
                    width: 200

                    ColumnLayout {
                        id: columnLayoutRadioButton

                        ExclusiveGroup { id: tabPositionGroup }

                        RadioButton {
                            text: qsTr("ОФАБ-100-120")
                            id: ofab100
                            checked: false
                            exclusiveGroup: tabPositionGroup
                        }

                        RadioButton {
                            text: qsTr("ОФАБ-250")
                            id: ofab250
                            checked: false
                            exclusiveGroup: tabPositionGroup
                        }

                        RadioButton {
                            text: qsTr("РБС-Ф025-33")
                            id: rbs
                            checked: false
                            exclusiveGroup: tabPositionGroup
                        }

                        RadioButton {
                            text: qsTr("РБК-250-А0.25")
                            id: rbk250
                            checked: false
                            exclusiveGroup: tabPositionGroup
                        }

                        RadioButton {
                            text: qsTr("РБК-500-А0.25")
                            id: rbk500
                            checked: false
                            exclusiveGroup: tabPositionGroup
                        }
                    } // To ColumnLayoutRadioButton
                } // To GroupBox

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Радиус поражения")
                }

                GridLayout {
                    id: centerGridLayout
                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Дальность до траверза КП, [м]")
                    }

                    TextField {
                        id: rangeTfoTraverse // Дальность до траверза КП
                        objectName: "rangeToTraverse"
                        width: 250
                    }


                } // To GridLayout

            } // To CloumnLayout
        } // To MainGroupBox
    } // To Item





        Button {
            x:500
            y:200
            id: openMap
            text: "Моделировать"
            //Layout.fillWidth: true

            onClicked: {
                var component = Qt.createComponent("map.qml");
                var browserWindow = component.createObject(this);

            }
        }
}  // To Window





