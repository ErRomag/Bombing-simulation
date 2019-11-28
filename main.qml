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
import Backend 1.0


ApplicationWindow {
    id: mainWindow
    visible: true

    property int windowWidth: 714
    property int windowHeight: 380

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

    Backend {
        id: backend
    }

    x:50
    y:50

    title: "Моделирование бомбометания"

    signal qmlSignal(string msg)

    MessageDialog {
        id: aboutBox
        title: "О программе"
        text: "Данное ПО моделирует бомбардировку двумя самолетами-истребителями\n" +
              "зенитного ракетного комплекса.";

        informativeText :"Разработали студенты кафедры 703 Зуб В.П. & Эрг Р.А.\n" +
                         "Иходный код проекта: https://github.com/ErRomag/Bombing-simulation"

        icon: StandardIcon.Information
    }

    MessageDialog {
        id: errorRadioButton
        title: "Ошибка"
        text: "Выберете вариант вооружения.\n";
        icon: StandardIcon.Critical
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

                    onTextChanged: backend.setAimDispersionTextField(text)
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

                    onTextChanged: backend.setTechnicalDispersionTextField(text)
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

                    onTextChanged: backend.setAmmunitionDispersionTextField(text)
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

                    onTextChanged: backend.setCombatRouteCenterPairTextField(text)
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

                    onTextChanged: backend.setRangeToTraverseTextField(text)
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Интервал строя, [м]")
                }

                ComboBox {
                    id: intervalRegime // Интервал строя
                    objectName: "intervalRegime"

                    Layout.fillHeight : false
                    Layout.fillWidth: false
                    Layout.maximumHeight : 25
                    Layout.maximumWidth: 105

                    model: [ "100", "200", "300" ]

                    onCurrentIndexChanged: backend.setIntervalRegimeComboBox(currentIndex)
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

                    onTextChanged: backend.setIntervalSeriesTextField(text)
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Высота бомбометания, [м]")
                }

                ComboBox {
                    id: bombingAltitude // Высота бомбометания
                    objectName: "bombingAltitude"
                    model: [ "1000", "1500", "2000" ]

                    onCurrentIndexChanged: backend.setBombingAltitudeComboBox(currentIndex)
                }

                Text {
                    Layout.alignment: Qt.AlignCenter
                    text: qsTr("Количество АСП, [шт]")
                }

                TextField {
                    id: numberASP // Количество АСП
                    objectName: "numberASP"
                    readOnly: true
                    width: 250
                    maximumLength: maximumLenghtTextField
                    validator: RegExpValidator {regExp: /\d+/}

                    text: backend.numberASPTextField
                    //onTextChanged: backend.setNumberASPTextField(text)
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

                    onTextChanged: backend.setNumberAmmunitionTextField(text)
                }

            } // To leftGridLayout
        } // To GrouBox
    }  // To Item

    property int indexRadioButtonQML: 0

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
                                indexRadioButtonQML = 1
                                backend.indexRadioButton = indexRadioButtonQML
                                //backend.setIndexRadioButton(1)
                            }
                        }

                        RadioButton {
                            text: qsTr("ОФАБ-250")
                            id: ofab250  // ОФАБ 250
                            objectName: "ofab250"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                indexRadioButtonQML = 2
                                backend.indexRadioButton = indexRadioButtonQML
                                //backend.setIndexRadioButton(2)
                            }
                        }

                        RadioButton {
                            text: qsTr("РБС-Ф025-33")
                            id: rbs  // РБС
                            objectName: "rbs"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                indexRadioButtonQML = 3
                                backend.indexRadioButton = indexRadioButtonQML
                                //backend.setIndexRadioButton(3)
                            }
                        }

                        RadioButton {
                            text: qsTr("РБК-250-А0.25")
                            id: rbk250  // РБК 250
                            objectName: "rbk250"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                indexRadioButtonQML = 4
                                backend.indexRadioButton = indexRadioButtonQML
                                //backend.setIndexRadioButton(4)
                            }
                        }

                        RadioButton {
                            text: qsTr("РБК-500-А0.25")
                            id: rbk500  // РБК 500
                            objectName: "rbk500"
                            checked: false
                            exclusiveGroup: tabPositionGroup

                            onClicked: {
                                indexRadioButtonQML = 5
                                backend.indexRadioButton = indexRadioButtonQML
                                //backend.setIndexRadioButton(5)
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
                        readOnly: true
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                        //
                        text: backend.radiusCPTextField
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус КП1, КП2, [м]")
                    }

                    TextField {
                        id: radiusCP12 // Радиус КП1, КП2, [м] (command post)
                        objectName: "radiusCP12"
                        readOnly: true
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}

                        text: backend.radiusCP12TextField
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус СУ1, СУ2, СУ3 [м]")
                    }

                    TextField {
                        id: radiusSC123 // Радиус СУ1, СУ2, СУ3 [м]  (system control)
                        objectName: "radiusSC123"
                        readOnly: true
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}

                        text: backend.radiusSC123TextField
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус РЛС, РЛВ [м]")
                    }

                    TextField {
                        id: radiusRLSV // Радиус РЛС, РЛВ [м]
                        objectName: "radiusRLSV"
                        readOnly: true
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}

                        text: backend.radiusRLSVTextField
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус ЭГ1, ЭГ2 [м]")
                    }

                    TextField {
                        id: radiusEG12 // Радиус ЭГ1, ЭГ2 РЛВ [м]  (electric generator)
                        objectName: "radiusEG12"
                        readOnly: true
                        width: 250
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}

                        text: backend.radiusEG12TextField
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Радиус кабелей [м]")
                    }

                    TextField {
                        id: radiusCable // Радиус кабелей [м]
                        objectName: "radiusCable"
                        readOnly: true
                        width: 300
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}

                        text: backend.radiusCableTextField
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Количество реализаций")
                    }

                    TextField {
                        id: numberRealization// Количество реализаций
                        width: 300
                        maximumLength: maximumLenghtTextField
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                        text: "1"

                        onTextChanged: backend.setNumberRealizationTextField(text)
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

                    text: backend.W0TextField
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

                    text: backend.W1TextField
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

                    text: backend.W2TextField
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

                    text: backend.W3TextField
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

                    text: backend.W4TextField
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

                    text: backend.W5TextField
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

                    text: backend.W6TextField
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

                        if (indexRadioButtonQML === 0) {
                            errorRadioButton.open()
                        } else {
                            backend.initialization()
                            var component = Qt.createComponent("map.qml");
                            var browserWindow = component.createObject(this);
                        }

                    }
                } // To Button

            }  // To rightGridLayout
        } // To rightGroupBox
    } // To rightItem

}  // To Window





