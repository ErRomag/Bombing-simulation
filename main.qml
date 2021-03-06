import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.0
import QtQuick.Dialogs 1.1
import QtQuick.Window 2.1

import Backend 1.0


ApplicationWindow {
    id: mainWindow
    visible: true

    property int windowWidth: 690
    property int windowHeight: 380

    property int leftItemWidth: 315
    property int centerItemWidth: 220
    property int rightItemWidth: 100

    property int indexRadioButtonQML: 0

    property int maximumLenghtTextField: 6  // Максимальная длина символов в поле TextField

    property real valPB2: 0
    property real valPB3: 0

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

    MessageDialog {
        id: aboutBox
        title: "О программе"
        text: "ПО моделирует бомбардировку двумя самолетами-истребителями\n" +
              "зенитно-ракетного комплекса.";

        informativeText :"Разработали студенты кафедры 703 Зуб В.П. & Эрг Р.А. 2019\n" +
                         "Исходный код проекта: https://github.com/ErRomag/Bombing-simulation\n" +
                         "Version 2.1"

        icon: StandardIcon.Information
    }

    MessageDialog {
        id: errorNULLTextFieldandRadioButton
        title: "Ошибка"
        text: "Проверьте все ли поля заполнены и выбран ли вариант вооружения.\n";
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

    RowLayout {
        id: mainItem
        anchors.fill: parent

        Rectangle {
            id:leftItem
            anchors.left:mainItem.left
            anchors.top: mainItem.top
            anchors.bottom: mainItem.bottom
            width: leftItemWidth

            GroupBox {
                id: leftGroupBox
                anchors.fill: leftItem

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
                        maximumLength: 3
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                        text: qsTr("35")

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
                        maximumLength: 3
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                        text: backend.technicalDispersionTextField

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
                        maximumLength: 3
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}
                        text: qsTr("40")

                        onTextChanged: backend.setAmmunitionDispersionTextField(text)
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        Layout.columnSpan: 2
                        text: qsTr("Режим бомбометания")
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Боевой маршрут центра пары, [м]")
                    }

                    TextField {
                        id: combatRouteCenterPair // Боевой маршрут центра пары
                        objectName: "combatRouteCenterPair"
                        width: 250
                        maximumLength: 4
                        validator: RegExpValidator {regExp: /^-?\d*\.?\d*$/}
                        text: qsTr("100")

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
                        maximumLength: 4
                        validator: RegExpValidator {regExp: /^-?\d*\.?\d*$/}

                        text: qsTr("50")

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
                        maximumLength: 3
                        validator: RegExpValidator {regExp: /\d+\.?\d*/}

                        text: qsTr("150")

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

                        onCurrentIndexChanged: {
                            backend.setBombingAltitudeComboBox(currentIndex)
                            backend.onChangeAltitude()
                        }
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Количество АСП, [шт]")
                    }

                    TextField {
                        id: numberASP // Количество АСП
                        objectName: "numberASP"
                        width: 250
                        maximumLength: 3  // Не больше трехзначного числа
                        validator: RegExpValidator {regExp: /\d+/}
                        text: backend.numberASPTextField
                        onTextChanged: backend.setNumberASPTextField(text)
                    }

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Количество суббоеприпасов СП, [шт]")
                    }

                    TextField {
                        id: numberAmmunition // Количество суббоеприпасов СП, [шт]
                        objectName: "numberAmmunition"
                        width: 250
                        maximumLength: 3
                        validator: RegExpValidator {regExp: /\d+/}
                        text: backend.numberAmmunitionTextField

                        onTextChanged: backend.setNumberAmmunitionTextField(text)
                    }

                } // To leftGridLayout
            } // To GrouBox
        }  // To Item



        Rectangle {
            id:centerItem
            anchors.left: leftItem.right
            anchors.top: mainItem.top
            anchors.bottom: mainItem.bottom
            width: centerItemWidth

            GroupBox {
                id: centerGroupBox
                anchors.fill: centerItem

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
                                    backend.onRadioButtonClicked()
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
                                    backend.onRadioButtonClicked()
                                }
                            }

                            RadioButton {
                                text: qsTr("РБС-100 АО-25-33")
                                id: rbs  // РБС
                                objectName: "rbs"
                                checked: false
                                exclusiveGroup: tabPositionGroup

                                onClicked: {
                                    indexRadioButtonQML = 3
                                    backend.indexRadioButton = indexRadioButtonQML
                                    backend.onRadioButtonClicked()
                                }
                            }

                            RadioButton {
                                text: qsTr("РБК-250 АО-2.5")
                                id: rbk250  // РБК 250
                                objectName: "rbk250"
                                checked: false
                                exclusiveGroup: tabPositionGroup

                                onClicked: {
                                    indexRadioButtonQML = 4
                                    backend.indexRadioButton = indexRadioButtonQML
                                    backend.onRadioButtonClicked()
                                }
                            }

                            RadioButton {
                                text: qsTr("РБК-500 АО-2.5")
                                id: rbk500  // РБК 500
                                objectName: "rbk500"
                                checked: false
                                exclusiveGroup: tabPositionGroup

                                onClicked: {
                                    indexRadioButtonQML = 5
                                    backend.indexRadioButton = indexRadioButtonQML
                                    backend.onRadioButtonClicked()
                                }
                            }
                        } // To ColumnLayoutRadioButton
                    } // To GroupBox

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Поражения ФЭ")
                    }

                    GridLayout {
                        id: centerGridLayout
                        columns: 2

                        Text {
                            Layout.alignment: Qt.AlignCenter
                            text: qsTr("КП, [м]")
                        }

                        TextField {
                            id: radiusCP // Радиус КП, [м]  (command post)
                            objectName: "radiusCP"
                            readOnly: true
                            width: 100
                            maximumLength: maximumLenghtTextField
                            validator: RegExpValidator {regExp: /\d+\.?\d*/}
                            //
                            text: backend.radiusCPTextField
                        }

                        Text {
                            Layout.alignment: Qt.AlignCenter
                            text: qsTr("КП1, КП2, [м]")
                        }

                        TextField {
                            id: radiusCP12 // Радиус КП1, КП2, [м] (command post)
                            objectName: "radiusCP12"
                            readOnly: true
                            width: 100
                            maximumLength: maximumLenghtTextField
                            validator: RegExpValidator {regExp: /\d+\.?\d*/}

                            text: backend.radiusCP12TextField
                        }

                        Text {
                            Layout.alignment: Qt.AlignCenter
                            text: qsTr("СУ1, СУ2, СУ3 [м]")
                        }

                        TextField {
                            id: radiusSC123 // Радиус СУ1, СУ2, СУ3 [м]  (system control)
                            objectName: "radiusSC123"
                            readOnly: true
                            width: 100
                            maximumLength: maximumLenghtTextField
                            validator: RegExpValidator {regExp: /\d+\.?\d*/}

                            text: backend.radiusSC123TextField
                        }

                        Text {
                            Layout.alignment: Qt.AlignCenter
                            text: qsTr("РЛС, РЛВ [м]")
                        }

                        TextField {
                            id: radiusRLSV // Радиус РЛС, РЛВ [м]
                            objectName: "radiusRLSV"
                            readOnly: true
                            width: 100
                            maximumLength: maximumLenghtTextField
                            validator: RegExpValidator {regExp: /\d+\.?\d*/}

                            text: backend.radiusRLSVTextField
                        }

                        Text {
                            Layout.alignment: Qt.AlignCenter
                            text: qsTr("ЭГ1, ЭГ2 [м]")
                        }

                        TextField {
                            id: radiusEG12 // Радиус ЭГ1, ЭГ2 РЛВ [м]  (electric generator)
                            objectName: "radiusEG12"
                            readOnly: true
                            width: 100
                            maximumLength: maximumLenghtTextField
                            validator: RegExpValidator {regExp: /\d+\.?\d*/}

                            text: backend.radiusEG12TextField
                        }

                        Text {
                            Layout.alignment: Qt.AlignCenter
                            text: qsTr("Кабели [м]")
                        }

                        TextField {
                            id: radiusCable // Радиус кабелей [м]
                            objectName: "radiusCable"
                            readOnly: true
                            width: 150
                            maximumLength: maximumLenghtTextField
                            validator: RegExpValidator {regExp: /\d+\.?\d*/}

                            text: backend.radiusCableTextField
                        }
                    } // To GridLayout
                } // To ColumnLayout
            } // To MainGroupBox
        } // To Item

        Rectangle {
            id:rightItem
            anchors.left: centerItem.right
            anchors.right: mainItem.right
            anchors.top: mainItem.top
            anchors.bottom: mainItem.bottom
            width: 300

            GroupBox {
                id: rightGroupBox
                anchors.top: rightItem.top
                anchors.right: rightItem.right
                anchors.left: rightItem.left

                GridLayout {
                    id: rightGridlayout
                    columns: 2

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        Layout.columnSpan: 2
                        text: qsTr("Вероятности попадания\nЗРК в состояния W0-W6")
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

                }  // To RightGridLayout
            } // To RightGroupBox


            GroupBox {
                id: rightBottomGroupBox
                anchors.top: rightGroupBox.bottom
                anchors.right: rightItem.right
                anchors.left: rightItem.left

                GridLayout {
                    id: rightBottomlayout
                    columns: 1

                    Text {
                        Layout.alignment: Qt.AlignCenter
                        text: qsTr("Количество реализаций")
                    }

                    TextField {
                        id: numberRealization// Количество реализаций
                        width: 300
                        maximumLength: 6
                        validator: RegExpValidator {regExp: /\d+/}
                        text: "100"
                        Layout.alignment: Qt.AlignCenter

                        onTextChanged: backend.setNumberRealizationTextField(text)
                    }
                }  // To RightGridLayout
            } // To RightGroupBox

            Button {
                x:30
                y:320
                id: openMap
                text: "Моделировать"

                onClicked: {
                    valPB3 = 0

                    if(indexRadioButtonQML === 0 || aimDispersion.text === "" ||   technicalDispersion.text === "" ||
                            ammunitionDispersion.text === "" || combatRouteCenterPair.text === "" ||
                            rangeToTraverse.text === "" ||        intervalSeries.text === "" ||
                            numberRealization.text === ""  || numberAmmunition.text === "" || numberASP === "")
                    {

                        errorNULLTextFieldandRadioButton.open()                  // Диалоговое окно при ошибке

                    } else {
                        valPB2 = 0
                        backend.clearVectorXYColor();                            // Очищение векторов
                        backend.initialization();                                // Инициализация переменных с формы

                        var component = Qt.createComponent("mapModel.qml");      // Создание модели карты
                        var browserWindow = component.createObject(mainWindow);  // Отображение модели карты
                        browserWindow.createEllipse();                           // Отрисовка эллипса
                        browserWindow.createPole();                              // Отрисовка поля с бомбами (квадратиками)
                        browserWindow.colorFuncElement();
                    }
                }

            } // To Button
        } // To RightItem
    } // To mainItem
}  // To Window
