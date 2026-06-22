#include <iostream> <string>
using namespace std;
int main(){int tr=0,w=0,b=6;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"                    CRICKET MATCH CALCULATOR"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"     Enter the total runs scored by the team: "<<endl;
    cout<<"     Enter the number of wickets lost: "<<endl;
    cout<<"     Enter the number of balls bowled: "<<endl;
    cout<<"     VALID INPUTS:"<<endl;
    cout<<"     WICKET: w"<<endl;
    cout<<"     RUN: 0,1,2,3,4,5,6"<<endl;
    cout<<"     WIDE: wd"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    for (int ball=1; ball<=b; ball++){
        string input;
        cout<<"Ball "<<ball<<":";
        cin>> input;
        if(input =="0"||input =="1"||input =="2"||input =="3"||input =="4"||input =="5"||input =="6")
        {
            int r=stoi(input);
            tr+=r;
        }
        else if (input =="W"||input=="w"){
            cout<<"OUT! "<<endl;
            w++;
            if(w==10){
                cout<<"All out! "<<endl;
                break;
            }
        }

        else if (input=="wd"||input=="WD"){
            cout<<"Wide ball! "<<endl;
            tr+=1;
            b--;
        }
        else{
            cout<<"Invalid input! Please enter a valid input."<<endl;
            ball--;
        }
    }

    double rr=static_cast<double>(tr);

    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"   Total Runs Scored: "<<tr<<endl;
    cout<<"   Total Wickets lost: "<<w<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    return 0;
}