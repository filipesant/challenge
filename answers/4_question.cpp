/*
Write an Unit Test using C/C++ or Java for the function ConcatRemove(s,t,k)
*/

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

string concatRemove(string starting, string desired, int operations){
    string result = "yes";

    int minLength = min(starting.length(), desired.length());
    int commonLength = 0;
    for(int i = 0; i < minLength; i++){
        if(starting[i] == desired[i]){
            commonLength++;
        } else {
            break;
        }
    }

    if ((desired.length() + starting.length() - 2 * commonLength) > operations){
        result = "no";
    }
    return result;
}


void testConcatRemove()
{
    //Scenario 1
    string s1 = "blablablabla";
    string d1 = "blablabcde";
    int operations1 = 8;
    string expected1 = "yes";

    //Scenario 2
    string s2 = "tab";
    string d2 = "tab";
    int operations2 = 7;
    string expected2 = "yes";

    //Action
    string result1 = concatRemove(s1, d1, operations1);
    string result2 = concatRemove(s2, d2, operations2);

    //Verification
    if( result1 == expected1){
        cout << "TEST 1: OK!" << endl;
    } else {
        cout << "TEST 1: ERROR!" << endl;
        cout << "Expected: " << expected1 << "FOUND: " << result1 << endl;
    }

    if( result2 == expected2){
        cout << "TEST 2: OK!" << endl;
    } else {
        cout << "TEST 2: ERROR!" << endl;
        cout << "Expected: " << expected2 << "FOUND: " << result2 << endl;
    }
}

int main()
{
   testConcatRemove();
    return 0;
}