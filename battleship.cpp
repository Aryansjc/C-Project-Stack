#include <iostream>
using namespace std;

int main(){
    const int size=5;
    char board[size][size];
    char hs[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            board[i][j]='+';
            hs[i][j]='+';
        }
    }
    hs[1][1]='S';
    hs[1][2]='S';
    hs[4][3]='S';
    int sr=3;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"                                    BATTLESHIP"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"In this game, there are 3 ship parts hidden in the grid."<<endl;
    cout<<"'+' represents the hidden parts of the grid"<<endl;
    cout<<"'H' represents the hits"<<endl;
    cout<<"'M' represents the misses"<<endl;
    while(sr>0){
        cout<<"  0 1 2 3 4"<<endl;
        for(int i=0;i<size; i++){
            cout<<i<<" ";
            for(int j=0;j<size;j++)
            cout<<board[i][j]<<" ";
            cout<<endl;
        }
        int r,c;
        cout<<"Enter row and column to attack(0-4): ";
        cin>>r>>c;
        if(r<0||r>=size||c<0||c>=size){
            cout<<"Wrong input. Try again."<<endl;
            continue;
        }   
        if(board[r][c]=='H'||board[r][c]=='M'){
            cout<<"You have already attacked this coordination."<<endl;
            continue;
        }
        char* mem=&board[r][c];
        if(hs[r][c]=='S'){
            cout<<"It's a HIT!"<<endl;
            *mem='H';
            sr--;
        }
        else{
            cout<<"It's a MISS!"<<endl;
            *mem='M';
        }
    }
    cout<<"Congrats! All ahips are sunk."<<endl;
}