/* Dolores Ontiveros        CSC-17A       Chapter 9,  P. 537, #1
/*
/**************************************************************\
* DYNAMICALLY ALLOCATE ARRAY:
*______________________________________________________________
* This program contains a function that allocates an array of
* integers. 
*______________________________________________________________
* INPUT-
*    number: user input number.
*
* OUTPUT-
*    number	    : Echo back of the number the user entered.
*    outside_Array_Ptr  : Address of the outside array.
*    inside_Array_Ptr   : Address of the inside array.
*	
***************************************************************/
#include <iostream>
using namespace std;
 
int array_Allocator(int);
 
int main()
{
   int number; 		// User intput.
   int inside_Array_Ptr;	// Inside array pointer.
   int outside_Array_Ptr;	// Outside array pointer.
   
   cout << "How many elements will the array need to allocate?:";
   cin >> number;
   cout << "\nThe array can hold " << number << " different integer values.\n";
   inside_Array_Ptr = array_Allocator(number);
   cout << "Outside of the function, the address is: "<< &outside_Array_Ptr << endl;
   
   return 0;
}
//***************************************************************
// array_Allocator Definition:                                  *
// This function holds a different address value, displays it,  * 
// and returns a pointer to the array.                          *    
//***************************************************************
int array_Allocator(int num)
{
     int *inside_Array_Ptr = new int[num];
     cout << "Inside of the function, the address is: ";
     cout << inside_Array_Ptr << endl;
     
     return *inside_Array_Ptr;
}