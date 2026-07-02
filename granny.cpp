#include <iostream>
#include <string>
using namespace std;
int main(){
    bool p=true;
    int s=0;
    int c=0;
    int m=0;

    while(p){
        m=m+1;
        cout<<"--------------------------------------------------------------------------------------"<<endl;
        cout<<"                                    GRANNY"<<endl;
        cout<<"--------------------------------------------------------------------------------------"<<endl;

        switch(s){
            case 0:
            cout<<"When you wake up you are in a dark room and after a while you realize that you are in a haunted house."<<endl;
            cout<<"You have to find a way to escape the house before the old granny finds you. The main door is locked.";
            cout<<"Your goal is to find the key and escape the house. There are also other ways to escape.";
            break;

            case 1:
            cout<<"You are in a bedroom. There is a bed, a closet and a vase on the table."<<endl;
            cout<<"If you pick up the vase and drop it the granny will come into the bedroom to capture you."<<endl;
            cout<<"1. Open the door and go towards the staircase."<<endl;
            cout<<"2. Smash the vase on the floor to make a noise, then hide in the closet."<<endl;
            cout<<"Choose from the above options: "<<endl;
            cin>>c;
            if(c==1)
            s=4;
            else if(c==2)
            s=2;
            else
            continue;
            break;

            case 2:
            cout<<"-------------------------- You have made a noise! -----------------------"<<endl;
            cout<<"After listening to the noise, the granny is coming towards the bedroom."<<endl;
            cout<<"1. Hide in the closet and wait for the granny to leave, then open the door and go outside.";
            cout<<"2. Pick up the vase again and drop it again."<<endl;
            cout<<"Choose from the above options: "<<endl;
            cin>>c;
            if(c==1)
            s=4;
            else if(c==2)
            s=3;
            else
            continue;
            break;

            case 3:
            cout<<"----------------------------- The granny caught you! -------------------------------"<<endl;
            cout<<"Since you delayed your escape, the granny has caught you."<<endl;
            cout<<"GAME OVER!"<<endl;
            p=false;
            break;

            case 4:
            cout<<"----------------------------- You have exited the bedroom and reached the staircase! -------------------------------"<<endl;
            cout<<"There are two rooms on the ground floor with the staircase in between."<<endl;
            cout<<"The room on the right is a library and the room on the left is the bathroom."<<endl;
            cout<<"1. Check out the two rooms"<<endl;
            cout<<"2. Go upstairs and look for key"<<endl;
            cout<<"Choose from the above options: "<<endl;
            cin>>c;
            if(c==1)
            s=5;
            else if(c==2)
            s=12;
            else
            continue;
            break;

            case 5:
            cout<<"----------------------------- Exploring the Ground Floor -------------------------------"<<endl;
            cout<<"1. Go towards the library and explore it."<<endl;
            cout<<"2. Go towards the bathroom and explore it."<<endl;
            cout<<"Choose from the above options: "<<endl;
            cin>>c;
            if(c==1)
            s=6;
            else if(c==2)
            s=7;
            else
            continue;
            break;

            case 6:
            cout<<"----------------------------- You have entered the library! -------------------------------"<<endl;
            cout<<"The room is filled with tall bookshelves covered with cobwebs. On the reading desk in the center of the room,"<<endl;
            cout<<"there was an old book at the center of the table. There is also a door in the room which is locked by a passcode."<<endl;
            cout<<"1. Open the book and examine it."<<endl;
            cout<<"2. Leave the library and go to the bathroom.";
            cout<<"Choose from the above options: ";
            cin>>c;

            if(c==1)
            s=10;
            else if(c==2)
            s=7;
            else 
            continue;
            break;

            case 7:
            cout<<"----------------------------- You have entered the bathroom! -------------------------------"<<endl;
            cout<<"You step inside the dark room on the dirty and cold tiles. The bathtub is filled with water."<<endl;
            cout<<"Suddenly the doorknob slowly starts to turn. She's here!"<<endl;
            cout<<"1. Hold your breath and hide in the bathtub until the granny leaves the bathroom."<<endl;
            cout<<"2. Climb outside the bathroom window and escape the house."<<endl;
            cout<<"Choose from the above options: ";
            cin>>c;
            if(c==1)
            s=8;
            else if(c==2)
            s=9;
            else
            continue;
            break;

            case 8:
            cout<<"----------------------------- The Bathtub --------------------------"<<endl;
            cout<<"You hold your breath and hide in the bathtub. As you thought she would leave, she catches you. You are trapped!"<<endl;
            cout<<"GAME OVER!"<<endl;
            p=false;
            break;

            case 9:
            cout<<"----------------------------- You have climbed outside the house! ------------------------------"<<endl;
            cout<<"You have escaped the house in " << m << " moves!";
            cout<<"CONGRATS! YOU WIN"<<endl;
            cin>>c;
            p=false;
            break;

            case 10:
            cout<<"----------------------------- You have opened the book! -------------------------------"<<endl;
            cout<<"The pages of the book are old and yellowed. The language of the book is something you would not understand.";
            cout<<"But on the last page of the book, has a four number code: 2-4-5-6"<<endl;
            cout<<"1. Use the code to open the door in the library and escape the house."<<endl;
            cout<<"2. Leave the library in confusion as you did not find anything important and go to the bathroom."<<endl;
            cout<<"Choose from the above options: ";
            cin>>c;
            if(c==1)
            s=11;
            else if(c==2)
            s=7;
            else
            continue;
            break;

            case 11:
            cout<<"----------------------------- The Door opens when you use the code! --------------------------------"<<endl;
            cout<<"You found that the code works and the door opens. It's a way out. You have finally escaped in " << m << " moves."<<endl;
            cout<<"CONGRATS! YOU WIN"<<endl;
            cin>>c;
            
            p=false;

            break;

            case 12:
            cout<<"----------------------------- You are climbing up the stairs! -------------------------------"<<endl;
            cout<<"The stairs make a creaking sound with each step. You are in the middle of the stairs when you notice the granny coming towards the staircase."<<endl;
            cout<<"1. Run towards the attic and find a place to hide there."<<endl;
            cout<<"2. Try to run past her towards the three rooms."<<endl;
            cout<<"Choose from the above options: "<<endl;
            cin>>c;
            if(c==1)
            s=14;
            else if(c==2)
            s=13;
            else
            continue;
            break;


            case 13:
            cout<<"----------------------------- You are caught! -------------------------------"<<endl;
            cout<<"The granny catches you when you try to run past her. You have lost."<<endl;
            cout<<"GAME OVER!"<<endl;
            p=false;
            break;


            case 14:
            cout<<"----------------------------- You are in the attic! ----------------------------"<<endl;
            cout<<"You have entered the attic and closed the door. There is a cupboard in the corner. There is also a small vent hole which is open."<<endl;
            cout<<"1. Try to climb out of the vent hole and escape the house."<<endl;
            cout<<"2. Hide in the cupboard and wait for granny to leave."<<endl;
            cout<<"Choose from the above options: "<<endl;
            cin>>c;
            if(c==1)
            s=16;
            else if(c==2)
            s=15;
            else
            continue;
            break; 

             case 15:
            cout<<"----------------------------- You are caught! -------------------------------"<<endl;
            cout<<"You have successfully crawled out of the vent hole and escaped the house in " <<m<< " moves."<<endl;

            cout<<"GAME OVER!"<<endl;
            p=false;
            break;

            case 16:
            cout<<"----------------------------- You have escaped! -------------------------------"<<endl;
            cout<<"You have successfully crawled out of the vent hole and escaped the house in " << m << " moves."<<endl;
            cout<<"CONGRATS! YOU WIN"<<endl;
            p=false;
            break;

            default:
            cout<<"Wrong Input! Return to start."<<endl;
            s=0;
            break;


        }
    }
    
}