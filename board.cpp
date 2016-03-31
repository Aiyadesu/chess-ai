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
QList<ChessPiece*> board;

// Piece Data Structures
//QList<ChessPiece*> whitePieces;
//QList<ChessPiece*> blackPieces;


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
 * Therefore, A1 (board[0]) is where the White Rook will initially be placed.
 */
Board::Board()
{
    /* Initialises the Board */
    // An eight by eight board has 64 total squares
    for(int squares = 0; squares < 64; squares++)
    {

        board.append(new ChessPiece());

    }


    /* Creates all White Pieces first and then all Black pieces
       and places them on the board */
    for(int colour = WHITE; colour <= BLACK; colour++)
    {

        // The rows range is 1-8 (not zero-indexed)
        // If colour is WHITE (0) row = 1
        // Else row = 8
        int row = colour * 7 + 1;

        // Hard coded the placement of pieces onto the first row
        board.replace(IndexAt(row, 1), new Rook((Colour) colour));
        board.replace(IndexAt(row, 2), new Knight((Colour) colour));
        board.replace(IndexAt(row, 3), new Bishop((Colour) colour));
        board.replace(IndexAt(row, 4), new Queen((Colour) colour));
        board.replace(IndexAt(row, 5), new King((Colour) colour));
        board.replace(IndexAt(row, 6), new Bishop((Colour) colour));
        board.replace(IndexAt(row, 7), new Knight((Colour) colour));
        board.replace(IndexAt(row, 8), new Rook((Colour) colour));


        // Pawns start on the second row for White and seventh row for Black
        (colour == WHITE) ? row = 2 : row = 7;

        // There are eight pawns all in the same row in Chess for both players
        for(int pawn = 1; pawn <= 8; pawn++)
        {

            board.replace(IndexAt(row, pawn), new Pawn((Colour) colour));

        }
    }
}


// Support function that converts between a non-index row and column number
// into the zero-index of the pseudo-multidimensional QList.
int Board::IndexAt(int row, int column)
{

    // There are eight "columns" in a row
    // Eg The first column of row three is at eight multiplied by three
    // The subtraction of one from each parameter is to account for zero-index
    return (8 * (row - 1)) + (column - 1);

}


