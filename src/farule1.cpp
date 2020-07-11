/*
A very simple rule
*/
#include <iostream>
#include <string>
#include <array>

using namespace std;

array<float,2> compute(const array<float,2> &invec) {
    cout << "Compute of FArule1\n Input:";
    for (const float &i : invec) {
        cout << i << "\n";
    }
    
    array<float,2> result = {-1, -1};
    result[0] = invec[0] + invec[1];
    result[1] = invec[0] * invec[1];
    return result;
}

string identify() {
    cout << "Identify of FArule1\n";
    return "I am Rule 1!";
}