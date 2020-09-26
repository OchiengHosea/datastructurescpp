#include "tictactoe.h"
#include <cstdlib>
#include <iostream>

const int X = 1, O = -1, EMPTY = 0;
int board[3][3];
int currentPlayer;

TicTacToe::TicTacToe()
{

}

void TicTacToe::clearBoard(){
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = EMPTY;
    currentPlayer = X;
}

void TicTacToe::putMark(int i, int j) { // mark row i column j
    board[i][j] = currentPlayer; // mark with current player
    currentPlayer = -currentPlayer;
}

bool TicTacToe::isWin(int mark) {
    int win = 3*mark;
    return ((board[0][0] + board[0][1] + board[0][2] == win)
            || (board[1][0] + board[1][1] + board[1][2] == win)
            || (board[2][0] + board[2][1] + board[2][2] == win)
            || (board[0][0] + board[1][0] + board[2][0] == win)
            || (board[0][1] + board[1][1] + board[2][1] == win)
            || (board[0][2] + board[1][2] + board[2][2] == win)
            || (board[0][0] + board[1][1] + board[2][2] == win)
            || (board[2][0] + board[1][1] + board[0][2] == win));
}

int TicTacToe::getWinner() {
    if (isWin(X)) return X;
    else if (isWin(O)) return O;
    else return EMPTY;
}

void TicTacToe::printBoard() {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            switch(board[i][j]) {
                case X: std::cout << "X"; break;
                case O: std::cout << "O"; break;
                case EMPTY: std::cout << " "; break;
            }
            if (j < 2) std::cout << "|";
        }
        if (i < 2) std::cout << "\n-+-+-\n";
    }
}
