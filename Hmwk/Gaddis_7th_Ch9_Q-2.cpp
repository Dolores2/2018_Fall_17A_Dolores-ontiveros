/* Dolores Ontiveros         CSC-17A      Chapter 9,  P. 537, #2
/*
/***************************************************************
* CALCULATE TEST SCORES #1:
*
*_______________________________________________________________
* This program dynamically allocates an array large enough to
* hold a user-defined number of test scores. Then the array
* is passed to a function that sorts them in ascending order.
*_______________________________________________________________
* INPUT-
*    numScores	: Number of test scores to be entered.
*    scores[count]	: Array that stores the scores.
*
* OUTPUT-
*    array[count]	: Echo back scores in ascending order.
*    average	: Average test scores.
*
****************************************************************/
#include <iostream>
#include <iomanip>
 
using namespace std;
 
void array_Selection_Sort(double *, int);
void show_Array_Ptr(double *, int);
double test_Average_Score(double, int);
 
int main()
{
   double *scores,         // 
   total = 0.0,            // Accumulator total.
   average;
   int numScores;	       // Number of test scores.

// User Prompt Enter Test Scores.
    cout << "How many test scores would you like to process? ";
    cin >> numScores;
    cout << endl;
	
// Dynamically allocate an array large enough to hold that many test scores.
    scores = new double[numScores];
    if (scores == NULL)
    
    return 0;

// Get the test score for each test.
    cout << "Enter the test scores below.\n";
     
     for (int count = 0; count < numScores; count++)
	{
	   cout << "Test Score #" << (count + 1) << ": ";
	   cin >> scores[count];
	   cout << endl;
	   while (scores[count] <= -1)
	   
	          {
	           cout << "Negative numbers not accepted.\n";
	           cout << "Test Score #" << (count + 1) << ": ";
		 cin >> scores[count];
		}
         }

// Calculate the total scores.
    for (int count = 0; count < numScores; count++)
       {
         total += scores[count];
       }

// Sort the elements of the array pointers.
array_Selection_Sort(scores, numScores);
    
    cout << "Ascending order of test scores is: \n";
    show_Array_Ptr(scores, numScores);
    test_Average_Score(total, numScores);
 
    return 0;
}

//**************************************************************
// Definition of function array_Selection_Sort:		   *
// This function takes the test scores inputted by the user    *
// and rearranges the test scores in ascending order.	   *
//**************************************************************
void array_Selection_Sort(double *array, int size)
{
    int startScan, minIndex;
    double  minElem;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
	  minIndex = startScan;
	  minElem = array[startScan];
	  
	for (int index = startScan + 1; index < size; index++)
	     {
                if (array[index]  < minElem)
		{
			minElem = array[index];
			minIndex = index;
		}
	     }
	array[minIndex] = array[startScan];
	array[startScan] = minElem;
	}
}
//**************************************************************
// Definition of function show_Array_Ptr:             	   *	
// This function goes through the array and outputs each       *
// number. It outputs the numbers that have previously been    *
// entered and sorted in ascending order.		   *
//**************************************************************/
void show_Array_Ptr(double *array, int size)
{
    for (int count = 0; count< size; count++)
    cout << array[count] << " ";
    cout << endl;
}
//***************************************************************
// Definition of function test_Average_Score:	              *	
// This function calculates the average test score from the     *
// values entered.					    *
//***************************************************************/
double test_Average_Score(double total, int numScores)
{
   double average;

// Calculate the average.
   average = total / numScores;

// Display the results.
   cout << fixed << showpoint << setprecision(2);
   cout << "Average Score: " << average << endl;
   
   return average;
}