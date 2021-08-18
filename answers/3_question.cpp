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

int main()
{
    string starting = "blablablabla";
    string desired = "blablabcde";
    int operations = 8;

    cout << concatRemove(starting, desired, operations);
    return 0;
}