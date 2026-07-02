#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int ps=0;
    int cs=0;
    int pc,cc;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"                            ROCK, PAPER, SCISSORS"<<endl;
    cout<<"                                [Best of 5]"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"1=Rock | 2=Paper | 3=Scissors"<<endl;

    for (int r=1; r<=5; ++r){
        cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        cout<<"                             Round "<<r<<":"<<endl;
        cout<<"Enter your choice: ";
        cin>>pc;
        cc=rand()%3+1;
        cout<<"Computer chose: ";

        if (cc==1)cout<<"Rock"<<endl;
        else if(cc==2) cout<<"Paper"<<endl;
        else cout<<"Scissors"<<endl;

        switch (pc){
            case 1:
            if(cc==1)
            cout<<"Result: It's a DRAW!"<<endl;
            else if(cc==2){
                cout<<"Result: Paper beats Rock! Computer WINS!"<<endl;
                cs++;
            }
            else{
                cout<<"Result: Rock beats Scissors!. You WIN!"<<endl;
                ps++;
            }
            break;

            case 2:
            if (cc==1){
                cout<<"Result: Paper beats Rock! You WIN!"<<endl;
                ps++;
                ;
            }
            else if(cc==2){
                cout<<"Result: It's a DRAW!"<<endl;
            }
            else{
                cout<<"Result: Scissors beats Paper! Computer WINS!"<<endl;
                cs++;

            }
            break;

            case 3:
            if(cc==1){
                cout<<"Result: Rock beats Scissors! Computer WINS!"<<endl;
                cc++;
            }
            else if(cc==2){
                cout<<"Result: Scissors beats Paper! You WIN!"<<endl;
                ps++;

            }
            else{
                cout<<"Result: It's a DRAW!"<<endl;
            }
            break;


            default:
            cout<<"Invalid Choice! Please choose between 1, 2 and 3."<<endl;
            cs++;
            break; 
        }   
          
        
         cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;
    }
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"Score: "<<"\n"<<"You: "<<ps<<" | Computer: "<<cs<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
} 