/* Dolores Ontiveros         CSC-17A       Chapter 9,  P. 538, #3
/*
/****************************************************************
* DROP LOWEST TEST SCORE:
* (Modified Program Challenge # 2)
*________________________________________________________________
* This program is a modified version of problem #2. It dynamically
* allocatesan array large enough to hold a user-defined number of 
* test scores. Then the array is passed to a function that sorts 
* them in ascending order. The lowest test score is then removed 
* from the list and ignored when finding the average. Another 
* function calculates the average of these scores. The sorted list 
* and averages are displayed to the user.
*________________________________________________________________
* INPUT-
*   numScores	: Number of test scores to be entered.
*   scores[count]	: Array that stores the scores.
*
* OUTPUT-
*  array[count] : Echo back of the scores in the array but in order.
*  test_Average_Score : Average of the test scores.
*
*****************************************************************/
#include <iostream>
#include <iomanip>
 
using namespace std;
 
void array_Selection_Sort(double *, int);
void show_Array_Ptr(double *, int);
double test_Average_Score(double arr[], int size);
 
int main()
{
	double *scores,         //
	total = 0.0,            // Accumulator total.
	average;
	int numScores;	    // Number of test scores. 

// User Prompt Enter Test Scores.
	cout << "How many test scores would you like to process?: ";
	cin >> numScores;
	cout << endl;

// Dynamically allocate an array large enough to hold that many test scores.
	scores = new double[numScores];
	if (scores == NULL)
		return 0;

// Get the test score for each test
   cout << "Enter the test scores below.\n";
 	
for (int count = 0; count < numScores; count++)
	{
	cout << "Test score #" << (count + 1) << ": ";
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
  for (int count = 1; count < numScores; count++)
	{
	total += scores[count];
	}
	
// Sort the elements of the array pointers.
   array_Selection_Sort(scores, numScores);
 
  cout << "\nLowest Test Score will be dropped. After, sort in ascending order:\n";
  show_Array_Ptr(scores, numScores);
  average = test_Average_Score(scores, numScores) ;
  cout << "\nAverage Score: " << average << endl;
  
  return 0;
}
//**************************************************************
// array_Selection_Sort Definition:			   *
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
// show_Array_Ptr Definition:				   *	
// This function goes through the array and outputs each       *
// number. It outputs the numbers that have previously been    *
// entered and sorted in ascending order.		   *
//**************************************************************/
void show_Array_Ptr(double *array, int size)
{
	for (int count = 1; count< size; count++)
	cout << array[count] << " ";
}
//***************************************************************
// test_Average_Score Definition:			    *	
// This function calculates the average test score from the     *
// values entered.					    *
//***************************************************************/
double test_Average_Score(double arr[], int size)
{
  int i, sum = 0;       
  double avg;          
 
   for (i = 1; i < size; ++i) 
   {
      sum += arr[i];
   }
   avg = double(sum) / (size - 1);
 
   return avg;
}
