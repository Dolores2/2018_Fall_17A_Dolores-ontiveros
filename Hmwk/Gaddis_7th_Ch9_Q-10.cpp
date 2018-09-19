/* Dolores Ontiveros         CSC-17A       Chapter 9,  P. 539, #10
/*
/*****************************************************************
* REVERSE ARRAY (ReverseArray)
*_________________________________________________________________
* This functions gets an integer array as pointer and array size 
* as integer as input, and creates an dynamically allocated 
* array with same size. The function passes the values in input 
* array to dynamically allocated array in reverse order, and 
* outputs pointer to the dynamically allocated array.
*_________________________________________________________________
* INPUT-
*  array       : Pointer to an integer array to reverse
*  size	     : The size of integer array that passed function
*
* OUTPUT-
*  ptrToReturn : Pointer to the dynamically allocated array
******************************************************************/

#include <iostream>
#include <iomanip>
 
using namespace std;

int *reverse_Array(const int *array, // INPUT: Pointer to an integer array. 
	        int size)          // INPUT: Size of Passed array.
{
   int *ptrToReturn = new int [size]; // OUTPUT: Dynamically allocated array.
   for(int i  = 0 ; i<size ; i++)
   {
   	
   *(ptrToReturn+(size-1)-i) = *(array+i);
   
   }
   return ptrToReturn;
}

int main ()

{
   const int SIZE = 10; // Size of array.
   int array[SIZE] = { 11,12,13,14,15,
		   16,17,18,19,20}; // Array to reverse.
   int *ptr_Array; // Pointer dynamically allocated array.
   ptr_Array = reverse_Array(array,SIZE);
   
for(int i  = 0 ; i<SIZE ; i++){
    cout << *(ptr_Array+i) << endl;
}
   delete [] ptr_Array;
   return 0;
}
 