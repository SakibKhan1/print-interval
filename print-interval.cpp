/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2 B
This program will print numbers between two intervals inputted.
*/
#include <iostream>
using namespace std;

int main()
{
    int L;
    int U;
    //Declares lower and upper bounds of interval
    cout << "Input first number: ";
    cin >> L;
    cout << "Input second number: ";
    cin >> U;
    for(int i = L; i < U; i++){
    //increment from first number to second number
        cout << i << endl;
    }

}
