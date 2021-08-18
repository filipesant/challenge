/*
Make a program in C/C++ or Java language that reverses a string informed by
the user without using any temporary variable, buffer or any pre-existing function
or method for this.
*/

#include <stdio.h>
#include <iostream>
using namespace std;

void stringReverse(string value, int size = 0){
    if (value[size] == '\0'){
        cout << value[size];
        return;
    }
    stringReverse(value, size+1);
    cout << value[size];
}

int main()
{
    string value = "filipe";
    stringReverse(value);
    return 0;
}