#include <iostream>
using namespace std;
//whgat
//Step 1- declare global enumeration constant
enum Choices{displayLeft=1,displayRight,Guess,Reset,Exit};
const int rows=5,cols=5;

//Step 2- Get the player's name
string getName();//gets name from the user

//Step 3- Visible Array
void genShowMatrix(int Matrix[][cols]);//generates visible matrix

//Step 4- Hidden Array
void genHideMatrix(int Matrix[][cols],int,int);//generates hidden matrix


void showMatrix(); //displays matrix


void setDisplayLeft(); //displays left boundary


void setDisplayRight();//displaye right boundary


void elimate(); //if correct guess, this will elimate the row and col


void guess();//allows the user to guess a number


bool allZeroes();//checks if either matrix is all zeroes


void initialize(); //starts the game