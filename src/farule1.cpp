/*
A very simple rule
*/
#include "farule1.hpp"
#include <iostream>
#include <string>
#include <array>

using namespace std;

array<float,2> compute(const array<float,2> &invec) {
    cout << "DLL: Compute of FArule1\n";
    cout << "DLL: Input:\n";
    for (const float &i : invec) {
        cout << "  " << i << "\n";
    }
    
    array<float,2> result = {-1.1, -2.0};
    result[0] = invec[0] + invec[1];
    result[1] = invec[0] * invec[1];
    return result;
}

string identify() {
    cout << "DLL: Identify of FArule1\n";
    return "I am Rule 1!";
}