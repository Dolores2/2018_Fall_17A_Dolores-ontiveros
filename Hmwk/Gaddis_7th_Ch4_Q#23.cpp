/* Dolores Ontiveros        CSC-17A       Chapter 4, P. 226, #23
/*
/***************************************************************
/* Internet Service Provider:
 *
 * This Program calculate's the customer's monthly bill.
 * The program also displays which Internet Package the customer
 * choose and how many hours were used. It then displays the 
 * total amount due.  
 **************************************************************/
 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
  
   char choice;
   float hours;
   float Amount;

   cout << "please enter your Subcription choice:\n";
   cin >> choice;
   cout<< "Please enter how many hours were used:\n";
   cin >> hours;
   if (hours > 744){
   cout <<"Error Message! Invalid Input: hours cannot exceede 744" << endl; 
   return 0;
   }
   switch (choice)
   { 
// INPUT Internet Service Provider-Three Subscription Packages  	
// Package Information:	
// Package A: For $9.95 per month 10 hours of access are provided. 
// Additional hours are $2.00 per hour. 	
   case 'A' : 
   case 'a' :
   Amount = 9.95 + (hours - 10.00) * 2; 
   break;
// Package B: For $14.95 per month 20 hours of access are provided. 
// Additional hours are $1.00 per hour. 
   case 'B' : 
   case 'b' :
   Amount = 14.95 + (hours - 20.00) * 1; 
   break;
// Package C: For $19.95 per month unlimited access is provided. 
// No additional charge's.  
   case 'C' : 
   case 'c' :
   Amount = 19.95; 
   break;
   default: cout <<"Error Message: Invalid Input Choice" << endl;
   }
   cout <<"Total Amount Due is: $" << Amount << endl;
   return 0;
}