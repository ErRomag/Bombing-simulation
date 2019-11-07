//import QtQuick 2.0
//import QtQuick.Layouts 1.1
//import QtQuick.Controls 1.0
//import QtQuick.Dialogs 1.1

import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.1
import QtQuick.Window 2.1
//import Testclass 1.0
import CalculationModel 1.0


ApplicationWindow {
    id: mainWindow
    visible: true

    property int windowWidth: 714
    property int windowHeight: 370

    property int leftItemWidth: 315
    property int centerItemWidth: 251
    property int rightItemWidth: 148

    property int maximumLenghtTextField: 6  // Максимальная длина символов в поле TextField

    width: windowWidth
    maximumWidth: windowWidth
    minimumWidth: windowWidth

    height: windowHeight
    maximumHeight: windowHeight
    minimumHeight: windowHeight

    CalculationModel {
        id: kernel
    }

    x:50
    y:50

    title: "Моделирование бомбометания"

    signal qmlSignal(string msg)

    MessageDialog {
        id: aboutBox
        title: "О программе"
        informativeText :"ПО разработали студенты кафедры 703 Зуб В.П. & Эрг Р.А."
        text: "Эта программа моделирует бомбардировку двумя самолетами-истребителями " +
              "зенитного ракетного комплекса";
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
        width: leftItemWidth

        GroupBox {
            id: leftGroupBox
            anchors.top: leftItem.top
            anchors.bottom: leftItem.bottom

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
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+\.?\d*/}
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Техническое рассеивание, [м]")
                }

                TextField {
                    id: technicalDispersion // Техническое рассеивание
                    objectName: "technicalDispersion"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+\.?\d*/}
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Рассеивание суббоеприпасов, [м]")
                }

                TextField {
                    id: ammunitionDispersion // Рассеивание суббоеприпасов (ammunition)
                    objectName: "ammunitionDispersion"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+\.?\d*/}
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
                    id: combatRouteCenterPair // Боевой маршрут центра пары
                    objectName: "combatRouteCenterPair"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+\.?\d*/}
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Дальность до траверза КП, [м]")
                }

                TextField {
                    id: rangeToTraverse // Дальность до траверза КП
                    objectName: "rangeToTraverse"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+\.?\d*/}
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Интервал строя, [м]")
                }

                ComboBox {
                    id: intervalRegime // Интервал строя
                    objectName: "intervalRegime"
                    model: [ "100", "200", "300" ]
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Интервал серии, [м]")
                }

                TextField {
                    id: intervalSeries // Интервал серии
                    objectName: "intervalSeries"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+\.?\d*/}
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Высота бомбометания, [м]")
                }

                ComboBox {
                    id: bombingAltitude // Высота бомбометания
                    objectName: "bombingAltitude"
                    model: [ "1500", "1700", "1900" ]
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Количество АСП, [шт]")
                }

                TextField {
                    id: numberASP // Количество АСП
                    objectName: "numberASP"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+/}
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Количество суббоеприпасов СП, [шт]")
                }

                TextField {
                    id: numberAmmunition // Количество суббоеприпасов СП, [шт]
                    objectName: "numberAmmunition"
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+/}
                }

            } // To leftGridLayout
        } // To GrouBox
    }  // To Item

    Item {
        id:centerItem
        anchors.left: leftItem.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: centerItemWidth

        GroupBox {
            id: centerGroupBox
            anchors.top: centerItem.top
            anchors.bottom: centerItem.bottom

            ColumnLayout {
                spacing: 3

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Варианты вооружения")
                }

                GroupBox {
                    id: groupBoxRadioButton
                    objectName: "groupBoxRadioButton"
                    Layout.alignment: Qt.AlignCenter
                    width: 200

                    ColumnLayout {
                        id: columnLayoutRadioButton

                       ExclusiveGroup { id: tabPositionGroup }

                        RadioButton {
                            text: qsTr("ОФАБ-100-120")
                            id: ofab100  // ОФАБ 100
                            objectName: "ofab100"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                kernel.RadioButton = 1
                            }
                        }

                        RadioButton {
                            text: qsTr("ОФАБ-250")
                            id: ofab250  // ОФАБ 250
                            objectName: "ofab250"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                kernel.RadioButton = 2
                            }
                        }

                        RadioButton {
                            text: qsTr("РБС-Ф025-33")
                            id: rbs  // РБС
                            objectName: "rbs"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                kernel.RadioButton = 3
                            }
                        }

                        RadioButton {
                            text: qsTr("РБК-250-А0.25")
                            id: rbk250  // РБК 250
                            objectName: "rbk250"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                kernel.RadioButton = 4
                            }
                        }

                        RadioButton {
                            text: qsTr("РБК-500-А0.25")
                            id: rbk500  // РБК 500
                            objectName: "rbk500"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                kernel.RadioButton = 5
                            }
                        }
                    } // To ColumnLayoutRadioButton
                } // To GroupBox

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Радиусы поражения ФЭ")
                }

                GridLayout {
                    id: centerGridLayout
                    columns: 2

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус КП, [м]")
                    }

                    TextField {
                        id: radiusCP // Радиус КП, [м]  (command post)
                        objectName: "radiusCP"
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус КП1, КП2, [м]")
                    }

                    TextField {
                        id: radiusCP12 // Радиус КП1, КП2, [м] (command post)
                        objectName: "radiusCP12"
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус СУ1, СУ2, СУ3 [м]")
                    }

                    TextField {
                        id: radiusSC123 // Радиус СУ1, СУ2, СУ3 [м]  (system control)
                        objectName: "radiusSC123"
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус РЛС, РЛВ [м]")
                    }

                    TextField {
                        id: radiusRLSV // Радиус РЛС, РЛВ [м]
                        objectName: "radiusRLSV"
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус ЭГ1, ЭГ2 РЛВ [м]")
                    }

                    TextField {
                        id: radiusEG12 // Радиус ЭГ1, ЭГ2 РЛВ [м]  (electric generator)
                        objectName: "radiusEG12"
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус кабели [м]")
                    }

                    TextField {
                        id: radiusCable // Радиус кабели [м]
                        objectName: "radiusCable"
                        width: 300
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                    }

                } // To GridLayout
            } // To ColumnLayout
        } // To MainGroupBox
    } // To Item

    Item {
        id:rightItem
        anchors.left: centerItem.right
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: 300

        GroupBox {
            id: rightGroupBox

            GridLayout {
                id: rightGridlayout
                columns: 2

                Text {
                    Layout.alignment: Qt.AlignCenter
                    Layout.columnSpan: 2
                    text: qsTr("Частота попадания по ФЭ")
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W0")
                }

                TextArea {
                    id: textAreaW0
                    objectName: "textAreaW0"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W1")
                }

                TextArea {
                    id: textAreaW1
                    objectName: "textAreaW1"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W2")
                }

                TextArea {
                    id: textAreaW2
                    objectName: "textAreaW2"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }


                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W3")
                }

                TextArea {
                    id: textAreaW3
                    objectName: "textAreaW3"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W4")
                }

                TextArea {
                    id: textAreaW4
                    objectName: "textAreaW4"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W5")
                }

                TextArea {
                    id: textAreaW5
                    objectName: "textAreaW5"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("W6")

                }

                TextArea {
                    id: textAreaW6
                    objectName: "textAreaW6"
                    readOnly: true
                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105
                }

                Button {
                    x:500
                    y:200
                    id: openMap
                    text: "Моделировать"
                    Layout.alignment: Qt.AlignCenter
                    Layout.columnSpan: 2
                    //Layout.fillWidth: true

                    onClicked: {
                        var component = Qt.createComponent("map.qml");
                        var browserWindow = component.createObject(this);
                        qmlSignal("");

                    }
                } // To Button

            }  // To rightGridLayout
        } // To rightGroupBox
    } // To rightItem

}  // To Window





