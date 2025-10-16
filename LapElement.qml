import QtQuick 2.15
import QtQuick.Controls 2.15

ItemDelegate {
    id: root
    width: model.width
    height: lapNumberId.height + 20
    anchors {
        horizontalCenter: parent.horizontalCenter
    }

    background: Rectangle{
        border { width: 1 }
        radius: 10
        anchors { fill: parent }
    }

    contentItem: Item {
        Text {
            id: lapNumberId
            anchors { left: parent.left }
            font { pointSize: 16 }
            text: model.lapNumber
        }

        Text {
            id: captureTimeId
            anchors { right: parent.right }
            font { pointSize: 16 }
            text: model.captureTime
        }
    }
}
