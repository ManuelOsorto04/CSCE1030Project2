#include "functions.h"


//Step 2- Get the player's name
string getName(){
    string name;
    cout<<"Enter your name:";
    getline(cin,name);

    bool pass;
    while(!pass){
        pass=true;
        for(char c: name){
            if(!(isalpha(c)) && !(isspace(c))){
                pass=false;
                cout<<"Name cannot have special characters.\n";
                cout<<"Enter your name again:";
                cin.ignore();
                getline(cin,name);
                break;
            }
        }
    }

    
    for(int i=0;i<name.length();++i){
        if(i-1<0){
            name.at(i)=toupper(name.at(i));
        }
        else if(isspace(name.at(i-1))){
            name.at(i)=toupper(name.at(i));
        }
        else{
            name.at(i)=tolower(name.at(i));
        }
    }
    //cout<<name<<endl;
    return name;
}

//Step 3 - Visible Array
void genShowMatrix(int Matrix[][cols]){
    for(int i=0;i<rows;++i){
        for(int j=0;i<cols;++j){
            Matrix[i][j]=-1;
        }
    }
}

//Step 4- Hidden Array
void genHideMatrix(int Matrix[][cols],int left,int right)
{
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            Matrix[i][j]=rand()%(right-left+1)+left;
        }
    }
}

//Step 5 - display visible array
void showMatrix(int Matrix[][cols]){
    for(int i=0;i<rows;++i){
        for(int j=0;j<cols;++j){
            cout<<Matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

//Step6 - Display left
void setDisplayLeft(int left,int right,int& display1,int display2){
    if(display2!=-1){
        cout<<"The right boundary is already displayed.\n";
    }
    else if(display1!=-1){
        cout<<"The left boundary is already displayed.\n";
    }
    else{
        display1=left;
        cout<<"Now if correctly guessed. You earn ONLY 1 point.\n";
        cout<<"You will also lose 10 points if guessed WRONG.\n";
    }
}

//Step 7 - Display right
void setDisplayRight(int left,int right,int& display2,int display1){
    if(display1!=-1){
        cout<<"The left boundary is alrady displayed.\n";
    }
    else if(display2!=-1){
        cout<<"The right boundary is already displayed.\n";
    }
    else{
        display2=right;
        cout<<"Now if correctly guessed. You earn ONLY 1 point.\n";
        cout<<"You will also lose 10 points if guessed WRONG.\n";
    }
}