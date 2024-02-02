#include <iostream>
#include <cmath>
using namespace std;

void prime(int input, int n = 2) {

    if(input % n == 0) {
        cout << n << " ";
        return prime(input / n, n);
    }

    else if (n <= input) {
        prime(input, n + 1);
    }

}


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

    prime (input);

}