#include <iostream>
#include <ctime>
using namespace std;
srand(time(NULL));


//Step 1- declare global enumeration constant
enum Choices{displayLeft=1,displayRight,Guess,Reset,Exit};
const int rows=5,cols=5;

//Step 2- Get the player's name
string getName();//gets name from the user

//Step 3- Visible Array
void genShowMatrix(int Matrix[][cols]);//generates visible matrix

//Step 4- Hidden Array
void genHideMatrix(int Matrix[][cols],int,int);//generates hidden matrix

//Step 5 - show visible array
void showMatrix(int Matrix[][cols]); //displays matrix

//Step6 - Display left
void setDisplayLeft(int,int,int&,int); //displays left boundary

//Step 7 - Display right
void setDisplayRight(int,int,int&,int);//displaye right boundary


void elimate(int visMatrix[][cols],int hidMatrix[][cols],int&,int&); //if correct guess, this will elimate the row and col


void guess();//allows the user to guess a number


bool allZeroes();//checks if either matrix is all zeroes


void initialize(); //starts the game