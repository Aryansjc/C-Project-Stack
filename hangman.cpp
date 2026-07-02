#include <iostream>
using namespace std;

int main(){
    char word[]= "HACKCLUB";
    int l=8;
    char guess[]="--------";
    char g[26];
    int total=0;
    int a=8;
    bool win=false;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    cout<<"                                       HANGMAN"<<endl;
    cout<<"-------------------------------------------------------------------------------------------"<<endl;
    cout<<"Please use UPPERCASE letters only."<<endl;
    while(a>0&&win==false){
        cout<<"Word to guess: ";
        for(int i=0;i<l;i++)
        cout<<guess[i]<<" ";
        cout<<endl;
        cout<<"Attempts left: "<<a<<endl;
        cout<<"Letters you have guessed: ";
        for(int i=0;i<total;i++)
        cout<<g[i]<<" ";
        cout<<endl;
        char c;
        cout<<"Enter a letter: ";
        cin>>c;
        g[total]=c;
        total++;
        bool found=false;
        for(int i=0;i<l;i++){
            if(word[i]==c){
                guess[i]=c;
                found=true;
            }
        }
        if(found==true)
        cout<<"Good Job! That letter is in the word."<<endl;
        else{
            cout<<"Sorry! That letter is not in the word."<<endl;
            a--;
        }
        win=true;
        for(int i=0;i<l;i++){
            if(guess[i]=='-')
            win=false;
        }
    }
    if(win==true)
    cout<<"Congrats! You have guessed the word: "<<word<<endl;
    else
    cout<<"Sorry! You have lost. The word was: "<<word<<endl;
}