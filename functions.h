#include <iostream>
using namespace std;

//Step 1- declare global enumeration constant
enum Choices{displayLeft=1,displayRight,Guess,Reset,Exit};

//Step 2- Get the player's name
string getName();//gets name from the user


void genShowMatrix();//generates visible matrix


void genHideMatrix();//generates hidden matrix


void showMatrix(); //displays matrix


void setDisplayLeft(); //displays left boundary


void setDisplayRight();//displaye right boundary


void elimate(); //if correct guess, this will elimate the row and col


void guess();//allows the user to guess a number


bool allZeroes();//checks if either matrix is all zeroes


void initialize(); //starts the game