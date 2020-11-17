//
// Created by Hp on 11/15/2020.
//

#ifndef UNTITLED9_TICTACTOE_H
#define UNTITLED9_TICTACTOE_H


class TicTacToe {
private:
    char board[3][3];
    bool cordFind(int x, int y,char turnPlayer);
    int getP1();
    int getP2();
    char turnPlayer;
    bool winner(char turnPlayer);
public:
    TicTacToe();
    void empty();
    void draw();
    void play();

};


#endif //UNTITLED9_TICTACTOE_H
