#include <iostream>
#include "functions.h"
using namespace std;

void printTitle()
{
    cout << "Welcome to OOP In-class Activity 5." << endl;
}

void calcProduct(double& x, double& y)
{
    double z;
    z = x * y;
    cout << "The first number is " << x << "." << endl;
    cout << "The second number is " << y << "." << endl;
    cout << "The result of the multiplication is " << z << endl;
}

void printNum(double& a)
{
    cout << "The decimal number is " << a << endl;
}