//
// Created by Hp on 11/15/2020.
//

#include "TicTacToe.h"
#include<iostream>
using namespace std;
TicTacToe::TicTacToe() {

}
void TicTacToe::empty() {
    for(int i=0;i<3;i++){
        for(int m=0;m<3;m++){
            board[i][m]=' ';
        }
    }
    cout<<"Welcome To TicTacToe Game!!!!"<<endl;
}
void TicTacToe::draw() {

    cout<<"    1   2   3"<<endl;
    for(int i=0;i<3;i++){
        cout<<"--------------"<<endl;
        cout<<i+1<<" | "<<board[i][0]<<" | "<<board[i][1]<<" | "<<board[i][2]<<endl;
    }
}

void TicTacToe::play(){
    empty();

    char player1='1';
    char player2='2';
    char turnPlayer='2';
    bool win=false;
    int x;
    int y;
    int count=0;
    while(win==false){
        draw();
       x=getP1();
       y=getP2();

       if(cordFind(x,y,turnPlayer)==false){
           cout<<"Cordinate is in use!!"<<endl;
       }else {
           count=count+1;
           if(winner(turnPlayer)==true){
               cout<<"Game is finished"<<endl;
               cout<<"Winner is "<<turnPlayer<<endl;
               win= true;

           }else if(count==9){
               cout<<"Match is tied"<<endl;
           }

           if (turnPlayer == player1) {
               turnPlayer = player2;
           } else {
               turnPlayer = player1;
           }
       }
    }
}
int TicTacToe::getP1() {
    int x;
    cout<<"Enter X cordinate:";
    cin>>x;
    return x-1;
}
int TicTacToe::getP2() {
    int y;
    cout<<"Enter Y cordinate:";
    cin>>y;
    return y-1;
}
bool TicTacToe::cordFind(int x, int y, char turnPlayer) {
if(board[x][y]!=' '){
    return false;
}
board[x][y]=turnPlayer;
    return true;
}
bool TicTacToe::winner(char turnPlayer) {
   for (int m = 0; m < 3; m++) {
        if ((board[m][0] == turnPlayer) && (board[m][0] == board[m][1]) && (board[m][1] == board[m][2])) {
            return true;
        }
    }
    for (int m = 0; m < 3; m++) {
        if ((board[0][m] == turnPlayer) && (board[0][m] == board[1][m]) && (board[1][m] == board[2][m])) {
            return true;
        }
    }
    if ((board[0][0] == turnPlayer) && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
        return true;
    }
    if ((board[2][0] == turnPlayer) && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
        return true;
    }
    return false;

}
