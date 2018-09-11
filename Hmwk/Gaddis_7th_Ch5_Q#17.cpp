/* Dolores Ontiveros           CSC-17A    Chapter 5, P. 297, #17
/*
/***************************************************************
/* Calculate Sales Bar Chart:
 * This program asks the user to enter today's sales for five 
 * stores. 
 *
 ***************************************************************
 * Input: 
 * (Each * = $100)
 *______________________________________________________________
 * Output:
 * 
 * 
 *
 ***************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//
int main() 
{
//  your code goes here
    int storeOne;  
    int storeTwo;
    int storeThree;
    int storeFour;
    int storeFive;
        
 // Get the number of sales per store.
    cout << "Enter today's sales for store 1:" << endl;
    cin >> storeOne;
    cout << "Enter today's sales for store 2:" << endl;
    cin >> storeTwo;
    cout << "Enter today's sales for store 3:" << endl;
    cin >> storeThree;
    cout << "Enter today's sales for store 4:" << endl;
    cin >> storeFour;
    cout << "Enter today's sales for store 5:" << endl;
    cin >> storeFive;
    
    cout <<" SALES BAR CHART" << endl;
    storeOne = storeOne / 100;
    storeTwo = storeTwo / 100;
    storeThree = storeThree / 100;
    storeFour = storeFour / 100;
    storeFive = storeFive / 100;
    
    cout <<"Store 1: ";
    
    for (int i = storeOne; i >= 0; i--)
    {
    cout <<"* ";
    
    }
    cout << endl;
    cout <<"Store 2: ";
    
    for (int i = storeTwo; i >= 0; i--)
    {
    cout <<"* ";
    
    }
    cout << endl;
    cout <<"Store 3: ";
    
    for (int i = storeThree; i >= 0; i--)
    {
    cout <<"* ";
    
    }
    cout << endl;
    cout <<"Store 4: ";
    
    for (int i = storeFour; i >= 0; i--)
    {
    cout <<"* ";
    
    }
    cout << endl;
    cout <<"Store 5: ";
    
    for (int i = storeFive; i >= 0; i--)
    {
    cout <<"* ";
    
    }
    cout << endl;
    return 0;
}