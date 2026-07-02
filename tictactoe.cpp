#include <iostream>
using namespace std;

int main(){
    char board[3][3]={
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    char t='X';
    bool gameover=false;
    int c=0;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"                                  TIC TAC TOE "<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;

    while (!gameover && c<9){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<board[i][j]<<" ";

            }
            cout<<endl;
        }
        int ch;
        cout<<"Player "<<t<<", enter your choice: ";
        cin>>ch;
        if(ch==1 && board[0][0]=='1'){
            board[0][0]=t;
            
        }
        else if (ch==2 && board[0][1]=='2'){
            board[0][1]=t;
            
        }
        else if (ch==3 && board[0][2]=='3'){
            board[0][2]=t;
            
        }
        else if (ch==4 && board[1][0]=='4'){
            board[1][0]=t;
            
        }
        else if (ch==5 && board[1][1]=='5'){
            board[1][1]=t;
            
        }
        else if (ch==6 && board[1][2]=='6'){
            board[1][2]=t;
            
        }
        else if (ch==7 && board[2][0]=='7'){
            board[2][0]=t;
            
        }
        else if (ch==8 && board[2][1]=='8'){
            board[2][1]=t;
            
        }
        else if (ch==9 && board[2][2]=='9'){
            board[2][2]=t;
            
        }
        else{
            cout<<"Wrong input. Try again."<<endl;
            continue;
        }
        bool won=false;
        for (int i=0;i<3;i++){
            if (board[i][0]==board[i][1]&&board[i][1]==board[i][2])
            won=true;
            if (board[0][i]==board[1][i]&&board[1][i]==board[2][i])
            won=true;
        }

        if(board[0][0]==board[1][1]&&board[1][1]==board[2][2])
        won=true;
        if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
        won=true;
        if(won){
            gameover=true;
            cout<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<board[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"Player "<<t<<" wins!"<<endl;

        }
        else {
            if(t=='X')
            t='O';
            else
            t='X';
            c++;
        }
    }
    if(!gameover){
        cout<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
            cout<<board[i][j]<<" ";
            cout<<endl;
        }
        cout<<"Its a Draw!"<<endl;
    }
}