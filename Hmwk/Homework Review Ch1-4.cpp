// Dolores Ontiveros        CSC-17A       Chapter 3, P. 148, #22
//
// Program Description:
// Write a program that plays a word game with the user. The 
// program should ask the user to enter the following:
// His or Her name.
// His or Her age.
// The name of a city. 
// The name of a college. 
// A profession.
// A type of animal.
// A pet's name.
// After the user has entered these items, the program should 
// display the following story, inserting the user's input into
// the appropriate locations.
//**************************************************************

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {	
//Input User Information
//
    string name;
    int age;
    string city;
    string college;
    string profession;
    string animal;
    string petname;
//Output User Information
//
    cin >> name;
    cin >> age;
    cin >> city; 
    cin >> college;  
    cin >> profession; 
    cin >> animal; 
    cin >> petname;
    
//Output Story
//
    cout <<"There once was a person named "<< name<<" who lived in "<<city <<". ";
    cout <<"At the age of "<< age <<", " << name<<" went to college at "<<college <<". ";
    cout << name<<" graduated and went to work as a "<< profession<<". ";
    cout <<"Then, "<< name<<" adopted a(n) "<< animal<<" named "<< petname<<". ";
    cout <<"They both lived happily ever after! "<<endl;
    return 0;
}