/ Dolores Ontiveros         CSC1-17A     Chapter 3, P. 147, #20
//
// THis program asks the user for an angle, entered in radians. 
// The program should then display the sine, cosine, and tangent
// of the angle. The output should be displayed in fixed-point 
// notation, rounded to four decimal places of precision.   
//**************************************************************
        
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
//Input Program Information 
//
    float radians;
    float sine;
    float cosine;
    float tangent;
    float total;
//Output Program Information
//
    radians = 0.20;
    sine = 0.2;
    cosine = 0.4;
    tangent = 0.2;
    total = 0;
//Compute Output
//
    total = (radians /sine) + cosine /tangent;
//Input Results
//
    cout << setprecision(4)<< fixed<<"The angle of 60 is "<< total<<". "<< endl;
    return 0;
}