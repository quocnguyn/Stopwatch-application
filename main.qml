import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.12
import QtQuick.Layouts 1.15
import MyType.WatchTimer 1.0

Window {
    id: root
    width: 640
    height: 480
    visible: true

    property int milisecond: 0
    property int second: 0
    property int minute: 0

    WatchTimer {
        id: timer
        interval: 10;
    }

    Column {
        anchors {
            horizontalCenter: parent.horizontalCenter
            fill: parent
        }
        spacing: 10

        Rectangle {
            id: watchContainer
            width: 400
            height: 270
            color: "beige"
            border { width: 2 }
            anchors {
                horizontalCenter: parent.horizontalCenter
                top: parent.top
                topMargin: 100
            }
            radius: 30

            Text {
                id: watchTitle
                text: "Stopwatch"
                font { weight: Font.Bold; pointSize: 30 }
                anchors {
                    top: parent.top; topMargin: 10
                    horizontalCenter: parent.horizontalCenter
                }
            }


            Rectangle {
                id: screen
                width: watchContainer.implicitWidth + 20
                height: time.implicitHeight + 20
                color: "#A4E64E"
                border { width: 2 }
                radius: 20
                Text {
                    id: time; color: "#331875"
                    text: timer.time
                    font { pointSize: 40 }
                    anchors { centerIn: parent }
                }
                anchors {
                    topMargin: 40
                    leftMargin: 30
                    rightMargin: 30
                    top: watchTitle.bottom
                    left: watchContainer.left
                    right: watchContainer.right
                }
            }

            Row {
                id: buttonRow; spacing: 30
                anchors {
                    topMargin: 30; top: screen.bottom
                    horizontalCenter: parent.horizontalCenter
                }

                WatchButton {
                    title: "Start"
                    onButtonClicked: { timer.start() }
                }

                WatchButton {
                    title: "Lap"
                    onButtonClicked: {
                        if(!timer.running) { return; }
                        myModel.insert(0, {
                            lapNumber: "Lap " + (myModel.count + 1),
                            captureTime: time.text,
                            width: lapList.width,
                        })
                    }
                }

                WatchButton {
                    title: "Stop"
                    onButtonClicked: { timer.stop() }
                }

                WatchButton {
                    title: "Reset"
                    onButtonClicked: {
                        timer.reset()
                        myModel.clear()
                    }
                }
            }
        }
        Rectangle {
            id: lapContainer
            width: watchContainer.width
            height: 200
            radius: 10

            border { width: 2 }
            anchors {
                horizontalCenter: parent.horizontalCenter
                top: watchContainer.bottom
                topMargin: 30
            }

            ListView {
                id: lapList
                width: lapContainer.width
                height: lapContainer.height
                anchors {
                    fill: parent
                    centerIn: parent
                    margins: 20
                }
                model: ListModel { id: myModel }
                clip: true
                spacing: 10
                delegate: LapElement {}
            }
        }
    }
}
