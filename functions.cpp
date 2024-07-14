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