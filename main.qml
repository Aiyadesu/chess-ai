import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2

import BlankSquare 1.0


Window
{

    id: gameWindow;

    height: 1600;
    width: 800;

    visible:  true;

    color: "green";

    title: "Chess Application";


    // Practice exposing C++ to QML
    Button
    {

        id: buttonLoadBoard;

        anchors.top: gridChessBoard.bottom;

        text: "lose";

        BlankSquare
        {

            id: dicks;

            Component.onCompleted:
                buttonLoadBoard.text = "DICK";

        }
    }

    /* A GridLayout that will display 64 individual squares of
     * alternating colours.
     */
    GridLayout
    {

        property bool dicks: true;

        id: gridChessBoard;

        columns: 8;
        rows: 8;

        Layout.fillWidth: true;
        Layout.fillHeight: true;

        anchors.fill: gameWindow;
        anchors.top: gameWindow.top;
        anchors.horizontalCenter: gameWindow.width / 2;
        anchors.verticalCenter: gameWindow.verticalCenter;

        // Generates a Grid according to the model and delegate
        Repeater
        {

            model: gridChessBoard.columns * gridChessBoard.rows;
            delegate: delegateChessBoardSquare;

        }

        /* A delegate used to generate a visual representation of
         * BlankSquares.
         *
         * The BlankSquares should alternate colours as
         * this is used for a Chess Board.
         *
         * The height and width should be equal as it is a Square.
         */
        Component
        {

            id: delegateChessBoardSquare;

            // A visual representation of a BlankSquare
            Rectangle
            {

                id: delegateSquare;

                height: 20;
                width: height;

                // TODO: Please tell me if there is a better way to do this
                color:
                {

                    if(gridChessBoard.dicks == true)
                    {

                        delegateSquare.color = "white";
                        gridChessBoard.dicks = false;

                    }
                    else
                    {

                        delegateSquare.color = "black";
                        gridChessBoard.dicks = true;

                    }
                }
            }
        }
    }
}
