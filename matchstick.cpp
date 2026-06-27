#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int match=21;
    int user=0,pc=0;
    bool gameover=0;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"                                21 Matchsticks Game"<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    cout<<"RULES:"<<endl;
    cout<<"1. There are 21 matchsticks."<<endl;
    cout<<"2. YOU and the COMPUTER can pick ";
    cout<<"3. The one who picks the last matchstick LOSES."<<endl;
    cout<<"----------------------------------------------------------------------------"<<endl;
    int d;
    cout<<"Select the difficulty level(1 or 2):"<<endl;
    cin>>d;
    cout<<"----------------------------------------------------------------------------"<<endl;
    switch(d){
        case 1:
        cout<<"Easy Mode:"<<endl;
        break;
        case 2:
        cout<<"Hard Mode:"<<endl;
        break;
        default:
        cout<<"Invalid choice. Easy Mode ON!"<<endl;
        break;
    }

    while (match>0 && !gameover){
        cout<<"Matchstick Remaining: "<<match<<endl;
        for (int i=0;i<match;++i){
        cout<<"i ";
        }
        cout<<endl;

        while(true){
            cout<<"Enter the number of match you want to pick out of 3:";
            cin>>user;
            if(user>=1 && user<=3 && user<=match)
                break;
            else{
                cout<<"Invalid choice! Select a number between 1 and 3"<<endl;
                continue;

            }

        }
        match-=user;
        if(match==1){
            cout<<"There is only 1 matchstick left and the COMPUTER has to pick it up. You WIN!"<<endl;
            gameover=true;

        }
        else if(match==0){
            cout<<"You pick up the last matchstick."<<endl<<"You LOSE!"<<endl;
            gameover=true;
            break;
        }
        pc=4-user;
        if(match>1 && match<5)
        pc=match-1;

        if(pc>match)
        pc=match;

        cout<<"Computer picks: "<<pc<<" matchsticks."<<endl;
        match-=pc;
        if(match==1){
            cout<<"There is only one matchstick left and you have to pick it up. You LOSE!"<<endl;
            gameover=true;
        }
        else if(match==0){
            cout<<"The Computer picks up the last matchstick."<<endl<<"You WIN!"<<endl;
            gameover=true;
        }
        cout<<"----------------------------------------------------------------------------"<<endl<<endl;
        }
    cout<<"Game Over!";
    return 0;
}
