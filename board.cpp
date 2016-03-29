#include "board.h"
#include <QString>
#include <iostream>
#include "chesspiece.h"
#include "bishop.h"
#include "king.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"

using namespace std;

// Board Data Structures
QList<QList<QString>> board;
QList<QString> *rowPtr;

// Piece Data Structures
ChessPiece *piecePtr;
QList<ChessPiece> initialPosition;

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

        rowPtr = new QList<QString>(); // Creates a row
        board.append(*rowPtr); // Adds row to the board

        // For this row, create eight columns

        for(int column = 0; column <= LENGTH; column++)
        {

            board[row].append("dicks");
            qDebug() << board[row].value(column) << row << column << endl;

        }
    }

    /* Initialises the Initial Positions of the Chess Pieces */
    piecePtr = new King();
    initialPosition.append(*piecePtr);
    //TODO: fucking fix this fucking fuck shit
    //TODO: find out why i can't add a derived class of ChessPiece
    // in ChessPiece QList (apparently it's a non-class type)
    //
}

void Board::CreateWhitePieces()
{

}

void Board::CreateBlackPieces()
{

}

