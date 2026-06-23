#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(){
    double rs;
    char d;
    long long tc;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|              JEE MAINS PERCENTILE ESTIMATOR               |"<<    endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"     Enter you raw score(out of 300): ";
    cin >>rs;
    cout<<"     Enter the total number of candidates: ";
    cin>>tc;
    cout<<"     Enter the difficulty level of the exam(E/M/H): ";
    cin>>d;

    double ns=0,p=0;
    switch (d){
        case 'E':
        ns=rs*0.85;
        break;

        case 'M':
        ns=rs*1;
        break;

        case 'H':
        ns=rs*1.2;
        break;

        default:
        cout<<"Invalid Entry! The default difficulty is MEDIUM";

    }
    if(ns>300){
        ns=300;

    }
    else if (ns <0){
        ns=0;

    }

    double rank=tc-((ns/300)*tc);
    if(rank<1){
        rank=1;
    }
    p=((tc-rank)/tc*100);
    cout<<"|------------------------------------------------------------|"<<endl;
    cout<<"|                     ESTIMATION RESULTS                     |"<<endl;
    cout<<"|------------------------------------------------------------|"<<endl;
    cout<<"|      Total Candidates: "<<tc<<"                            |"<<endl;
    cout<<"|      Normalized Score: "<<ns<<"/300                        |"<<endl;
    cout<<"|      Percentile: "<<p<<"%                                  |"<<endl;
    cout<<"|------------------------------------------------------------|";
    return 0;

}