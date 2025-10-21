import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: buttonId
    width: buttonContainer.width
    height: buttonContainer.height

    property alias title: buttonTitle.text
    property alias iconSource: buttonIcon.source
    property int iconSize: 16
    signal buttonClicked

    Button {
        id: buttonModel

        contentItem: Column {
            id: contentColumn
            spacing: 8
            anchors {
                fill: parent
                centerIn: parent
                margins: 7
            }

            Image {
                id: buttonIcon
                width: visible ? iconSize : 0
                source: ""
                height: iconSize
                fillMode: Image.PreserveAspectFit
                smooth: true
                anchors {
                    horizontalCenter: parent.horizontalCenter
                }
            }

            Text {
                id: buttonTitle
                text: ""
                width: 55
                font { pointSize: 16 }
                horizontalAlignment: Text.AlignHCenter
            }
        }

        background: Rectangle {
            id: buttonContainer
            radius: 6
            border { width: 2 }
            anchors {
                centerIn: parent
            }

            color: buttonModel.down ? "lightgrey" : "white"
        }

        onClicked: buttonClicked()
    }
}
