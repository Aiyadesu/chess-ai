import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 1.4

import BlankSquare 1.0


Window
{

    id: gameWindow;

    height: 1600;
    width: 800;

    visible:  true;

    color: "black";

    title: "Chess Application";

    Text
    {

        height: 200;
        width: 200;
        text: "Hello, World!";

        color: "green";

    }

    Button
    {

        id: buttonLoadBoard;

        text: "lose";

        BlankSquare
        {

            id: dicks;

            Component.onCompleted:
                buttonLoadBoard.text = "DICK";



        }




        // Currently does nothing.





    }

    Grid
    {

    }

    Item
    {

    }

    ListView
    {

    }
}
