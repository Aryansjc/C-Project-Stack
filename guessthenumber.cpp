#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int sn=rand()%100+1;
    int guess=0;
    int attempts=0;
    
    cout<<"------------------------------------------------------------------------------"<< endl;
    cout<<"                         NUMBER GUESSING GAME!"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"I have picked a number between 1 to 100."<<endl;
    while (guess !=sn){
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;
        if(guess>sn){
            cout<<"You have guessed higher! Try again."<<endl;
        }
        else if(guess<sn)
        cout<<"You have guessed lower! Try again."<<endl;
        else
        cout<<"Congrats! You have guessed the number."<<endl;

    }
    cout<<"You have guessed the number in "<<attempts<<"attempts.";
    return 0;

}