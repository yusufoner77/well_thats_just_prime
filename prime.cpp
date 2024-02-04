#include <iostream>
#include <cmath>
using namespace std;

void prime(int input, int n = 2) {

    if(input % n == 0) {

        cout << n << " ";
        return prime(input / n, n);

    }

    else if (n <= input) {

        return prime(input, n + 1);

    }
    cout << endl;
}