#include <iostream>
#include <cmath>
#include "prime.hpp"
#include <vector>
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

     vector<int> factors = prime(input);
     
     for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
     }

     cout << endl << endl;
    
    cout << "Is " << input << " a prime number? 1 = true, 0 = false" << endl;
    cout << isPrime(input)<< endl;
    

}