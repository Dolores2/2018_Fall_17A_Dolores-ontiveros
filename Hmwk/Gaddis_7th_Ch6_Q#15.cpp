/* Dolores Ontiveros           CSC-17A    Chapter 6, P. 372, #15
/*
/***************************************************************
* Calculate Population Growth:
*
________________________________________________________________
* This program calculates the growth of a popualtion over the 
* next six years.
*_______________________________________________________________
* INPUT-
* P = previous population size.
* B = Birth rate.
* D = Death rate.
*
* OUTPUT-
* N = New population size.
*
* FORMULA:
* N = P + BP - DP
****************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
//
int p (int pop, float birth, float death)
  {
  int new_pop = pop + (birth/100 * pop) - (death/100 * pop);
  return new_pop;
  }
int main() 
{
//
    int pop;            // Starting size of the population.
    int new_pop;       // New Populaton Size.
    float birth;      // The annual birth rate.
    float death;     // The annual death Rate.
    int years;      // The number of years to display.
//    
   cout << "The Sarting size of a population: " << endl;
   cin >> pop;
   cout << "The annual birth rate: " << endl;
   cin >> birth;
   cout << "The annual death rate: " << endl;
   cin >> death;
   cout << "The Number of Year's to display: " << endl;
   cin >> years;
  for (int i = 0; i < years; i++)
  {
  pop = p(pop, birth, death);
  cout <<"The new population size is: " <<pop << endl;
  }
    return 0;
}