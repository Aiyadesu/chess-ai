#include "board.h"
#include "chesspiece.h"
#include "bishop.h"
#include "king.h"
#include "knight.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"

using namespace std;

// Board Data Structures
QList<QList<ChessPiece>> board;
QList<ChessPiece> * rowPtr;

// Piece Data Structures
QList<ChessPiece> whitePieces;
QList<ChessPiece> blackPieces;
QList<ChessPiece> * colourPtr;

ChessPiece * piecePtr;

// Column Conversion variable
QString columnStr = "ABCDEFGH";

/*
 * Pre-condition: A new board is required for a game of Chess!
 *
 *
 * Post-condition: An eight by eight (8 * 8) board is created.
 *
 * The board will be populated with White and Black Chess pieces.
 *
 * The Chess pieces for each colour are: Eight (8) Pawns,
 * Two (2) Rooks, Two (2) Knights, Two (2) Bishops, a Queen
 * and a King.
 *
 * Note: The Board will be positioned from "White's Perspective".
 * Therefore, A1 is where the White Rook will initially be placed.
 */
Board::Board()
{
    /* Initialises the Board */
    // Start by creating eight rows one by one
    // Eight "columns" are created within a row
    // Repeat until it has been done eight times
    // The end result is an eight by eight board
    for(int row = 0; row <= LENGTH; row++)
    {

        rowPtr = new QList<ChessPiece>(); // Creates a row
        board.append(*rowPtr); // Adds row to the board

        // For this row, create eight columns
        for(int column = 0; column <= LENGTH; column++)
        {
            piecePtr = new ChessPiece();

            board[row].append(*piecePtr);
            qDebug() << board[row].value(column).getPosition() << row << column << endl;

        }
    }


    /* Initialises the Initial Positions of the Chess Pieces */
    // Can't think of a better way to implement this atm
    // Hard coding tfw

    // Creates a White King and Queen and then a Black King and Queen
    for(int colour = 1; colour <= 2; colour++)
    {

        Colour pColour;


        if (colour == WHITE)
        {

            pColour = WHITE;
            colourPtr = &whitePieces;

        }

        else if (colour == BLACK)
        {

            pColour = BLACK;
            colourPtr = &blackPieces;

        }

        else
        {
            std::cout << "The colour is not White or Black!!" << std::endl;
        }

        piecePtr = new King(pColour); // Int can convert to bool ? well, it works
        colourPtr->append(*piecePtr);

        piecePtr = new Queen(pColour);
        colourPtr->append(*piecePtr);


    }

    /* Creates two White and Black Rooks, Knights and Bishops */
    // Creates two Rooks, Knights and Bishops
    for(int noPieces = 0; noPieces < 2; noPieces++)
    {
        // Creates one Rook, Knight and Bishop of each colour
        for(int colour = 1; colour <= 2; colour++)
        {

            Colour pColour;


            if (colour == WHITE)
            {

                pColour = WHITE;
                colourPtr = &whitePieces;

            }

            else if (colour == BLACK)
            {

                pColour = BLACK;
                colourPtr = &blackPieces;

            }


            piecePtr = new Rook(pColour);
            colourPtr->append(*piecePtr);

            piecePtr = new Knight(pColour);
            colourPtr->append(*piecePtr);

            piecePtr = new Bishop(pColour);
            colourPtr->append(*piecePtr);


        }
    }

    /* Creates eight White and Black Pawns */
    // Creates eight Pawns
    for(int noPieces = 0; noPieces < 8; noPieces++)
    {
        // Creates a Pawn of each colour
        for(int colour = 1; colour <= 2; colour++)
        {

            Colour pColour;


            if (colour == WHITE)
            {

                pColour = WHITE;
                colourPtr = &whitePieces;

            }

            else if (colour == BLACK)
            {

                pColour = BLACK;
                colourPtr = &blackPieces;

            }


            piecePtr = new Pawn(pColour);
            colourPtr->append(*piecePtr);


        }
    }

    colourPtr = &whitePieces;
    piecePtr = *colourPtr->indexOf(&)
    board[0].insert(0, *colourPtr->value(0, Pawn));



}
