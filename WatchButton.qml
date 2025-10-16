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

        contentItem: Row {
            id: contentRow
            spacing: 8
            anchors.centerIn: parent

            Image {
                id: buttonIcon
                source: ""
                width: visible ? iconSize : 0
                height: iconSize
                fillMode: Image.PreserveAspectFit
                smooth: true
            }

            Text {
                id: buttonTitle
                font { pointSize: 16 }
                verticalAlignment: Text.AlignVCenter
            }
        }

        background: Rectangle {
            id: buttonContainer
            width: buttonModel.contentItem.implicitWidth + 15
            height: buttonModel.contentItem.implicitHeight + 15
            radius: 6
            border { width: 2 }
            color: buttonModel.down ? "lightgrey" : "white"
        }

        onClicked: buttonClicked()
    }
}
