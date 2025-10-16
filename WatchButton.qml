import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: buttonId
    width: buttonContainer.width
    height: buttonContainer.height

    property alias title: buttonTitle.text
    signal buttonClicked

    Button {
        id: buttonModel

        contentItem: Text {
            id: buttonTitle
            font { pointSize: 16 }
        }

        background: Rectangle {
            id: buttonContainer
            width: buttonTitle.width + 15
            height: buttonTitle.height + 15
            radius: 6
            border { width: 2 }
            color: buttonModel.down ? "lightgrey" : "white"
        }

        onClicked: buttonClicked()
    }
}
