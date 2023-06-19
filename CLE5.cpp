/* 
* Author: Kritika Singh
 * Created on June 3, 2022, 12: p.m.
 * Version: 1.0
 * Purpose: Input Output Manipulation and some Mathematical operations
 * Description: 
 * - Using function to display a welcome message for the program.
 * - Reads two decimal numbers from the user.
 * - Use your function to multiply the two numbers the user entered.
 * - Use your function to display the multiplication answer that you calculated in the previous step.
 
 * Functions used:
 * - printTitle: This function prints a single welcome message.
 * - calcProduct: takes two decimal numbers as parameters and return their product(multiplication).
 * - printNum: takes a decimal number and display its value
 */
#include <iostream>
using namespace std;
#include "functions.h"

int main()
{
    double input1 = 0;
    double input2 = 0;
    double input3 = 0.0;
    
    printTitle();
    
    cout << "Enter two number separated by space: " << endl;
    cin >> input1 >> input2;
    calcProduct(input1, input2);
     
   
    cout << "Enter a decimal number: " << endl;
    cin >> input3;
    printNum(input3);
    
    return 0;
}