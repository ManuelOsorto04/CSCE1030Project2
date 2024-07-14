#include "functions.h"

int main(){

    //Step 3- Visible Array
    int visMatrix[rows][cols];

    //Step 4- Hidden Array
    int hidMatrix[rows][cols];

    //Step 14
    int points=100;
    int diplay1=-1,display2=-1;
    int leftBound,rightBound;

    //Step 15
    initialize(visMatrix,hidMatrix,leftBound,rightBound);
    //Step 15- Get the player's name
    string name=getName();


    int input;
    do{
        cout<<"Main Menu\n";
        cout<<"1. Display Left\n";
        cout<<"2. Display Right\n";
        cout<<"3. Guess\n";
        cout<<"4. Reset Game\n";
        cout<<"5. Quit";
        cout<<"\nEnter your choice:";
        cin>>input;

        Choices choice=static_cast<Choices>(input);

        switch(choice){
            case (displayLeft):{
                setDisplayLeft(leftBound,rightBound,display1,display2);
            }
            case (displayRight):{
                setDisplayLeft(leftBound,rightBound,display2,display1);
            }
            case (Guess):{

            }
            case (Reset):{

            }
            case (Quit):{

            }
            default:{
                cout<<"Invalid Choice."<<endl;
            }
        }

    }while(points>=0);

    return 0;
}