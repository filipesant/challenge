/*
Make a program in C/C++ or Java language that calculates the length
of a string informed by the user (do not use any pre-existing function
or method for this, such as len(), count(), strlen() or length());
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int stringLength(string value){
    int i = 0;
    while(value[i] != '\0')
    {
	      i++;
	  }
    return i;
}

int main()
{
    string value = "filipe";
    cout << stringLength(value) << endl;
    return 0;
}