#include <iostream>
#include <cmath>
#include "prime.hpp"
using namespace std;

int main() {

    int input;

    cout << "Enter a number greater than 1: ";
    cin >> input;
    cout << endl;

    while(input <= 1) {

        cout << "I cannot calculate the prime factors of that number." << endl << endl;

        cout << "Enter a number greater than 1: ";
        cin >> input;
        cout << endl;

    }

     cout << "The prime factors of " << input << " are ";
     
     prime(input);

     cout << endl;
    

}