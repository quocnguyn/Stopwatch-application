import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Window 2.12
import QtQuick.Layouts 1.15
import MyType.WatchTimer 1.0

Window {
    id: root
    width: 640
    height: 640
    visible: true

    WatchTimer {
        id: timer
        interval: 10;
    }

    Rectangle {
        anchors {
            horizontalCenter: parent.horizontalCenter
            fill: parent
        }

        Rectangle {
            id: watchContainer
            width: 450
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
                width: watchContainer.implicitWidth
                height: time.implicitHeight
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
                    topMargin: 40; top: watchTitle.bottom
                    leftMargin: 30; left: watchContainer.left
                    rightMargin: 30; right: watchContainer.right

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
                    iconSource: SourceProvider.start
                    onButtonClicked: { timer.start() }
                }

                WatchButton {
                    title: "Stop"
                    iconSource: SourceProvider.stop
                    onButtonClicked: { timer.stop() }
                }

                WatchButton {
                    title: "Lap"
                    iconSource: SourceProvider.lap
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
                    title: "Reset"
                    iconSource: SourceProvider.reset
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
                top: watchContainer.bottom; topMargin: 30
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
