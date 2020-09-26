#ifndef TICTACTOE_H
#define TICTACTOE_H


class TicTacToe
{
public:
    TicTacToe();
    void clearBoard();
    void putMark(int i, int j);
    bool isWin(int mark);
    int getWinner();
    void printBoard();
};

#endif // TICTACTOE_H
