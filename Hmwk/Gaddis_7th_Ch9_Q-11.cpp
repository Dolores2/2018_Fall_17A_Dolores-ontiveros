/* Dolores Ontiveros        CSC-17A       Chapter 9,  P. 538, #11
/*
/****************************************************************
* ARRAY EXPANDER:
*
*________________________________________________________________
* This program uses a function that takes an int array and
* its size and dynamically allocates a new array double the
* original arrays size and copies the elements of the original
* array into the new array.
*________________________________________________________________
* INPUT-
*   old_Array: Pre-existing int array.
*
* OUTPUT-
*   new_Array: New array with double the original array's size.
*
*****************************************************************/
 #include <iostream>
using namespace std;
 
int* expand_Array(int old_Array[], int SIZE);
 
int main() 
{
   const int SIZE = 15;
   int* new_Array;
   int old_Array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 
		      8, 9 , 10, 11, 12, 13, 14, 15};
 
   new_Array = expand_Array(old_Array, SIZE);
 for(int i = 0; i < (SIZE * 2); ++i)
     cout << new_Array[i] << endl;
 
    return 0;
}
 
int* expand_Array(int old_Array[], int SIZE)
{
int* new_Array;
int newSize = SIZE * 2;
 
new_Array = new int[newSize];
 
// Initialize Array Elements to 0.
for(int i = 0; i < newSize; ++i)
    new_Array[i] = 0;
 
// opy Old Array into New Array.
for(int i = 0; i < SIZE; ++i)
new_Array[i] = old_Array[i];
 
    return new_Array;
}