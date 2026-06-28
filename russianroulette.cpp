#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
 int main(){
    int l;
    int t=1;
    bool gameover=false;
    string e;
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    cout<<"                                   Russian Roulette"<<endl;
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    
    srand(time(0));
    l=(rand()%6)+1;
    cout <<"You are playing against the computer."<<endl;
    cout<<"There are 6 chambers in the gun and only on eof them is loaded with a bullet"<<endl;
    while (!gameover){
      for(int i=1;i<=6;i++){
        switch(t){
          case 1:
          cout<<"It's your turn.\n Bullet No. "<<i<<".\n Press ENTER to pull the trigger."<<endl;
          getline(cin,e);
          break;
          case 2:
          cout<<"It's the COMPUTER's turn.\n Bullet No. "<<i<<"."<<endl;
          
          break;
          default:
          cout<<"Something went wrong!!!"<<endl;

        }
        if (i==l){
          if(t==1)
          cout<<"BOOM!!! Tou are dead. The COMPUTER wins."<<endl;
          else
          cout<<"BOOM!!! The COMPUTER is dead. You WIN."<<endl;
          gameover=true;
          break;

        }
        else{
          cout<<"CLICK! You are still alive."<<endl;
          if(t==1)
          t=2;
          else
          t=1;
          
          cout<<"_____________________________________________________________________________________\n\n";
          continue;
          cout<<"_____________________________________________________________________________________";
        }
      }
    }
    return 0;
 }