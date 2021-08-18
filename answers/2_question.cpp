/*
Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

Your solution should be using as few lines of code as possible, but you should produce efficient code.
*/
#include <stdio.h>
#include <iostream>

using namespace std;

void fooBaa(){
    for(int i = 1; i <= 100; i++)
    {
        string result = "";
        if((i % 3) == 0){
            result = "Foo";
        }

        if((i % 5) == 0){
            result += "Baa";
        }

        if (result.length() > 0){
            cout << result << endl;
        } else{
          cout << i << endl;
        }
    }
}

int main()
{
    fooBaa();
    return 0;
}
