#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> prime(int input, int n = 2) {
    vector<int> factors;

    if(input % n == 0) {

        factors.push_back(n);

        vector<int> remaining_factors = prime(input / n, n);

        factors.insert(factors.end(), remaining_factors.begin(), remaining_factors.end());

    }

    else if (n <= input) {

        return prime(input, n + 1);

    }

    return factors;
}

bool isPrime (int input) {
    
    vector<int> factors = prime(input);

    

    if (factors.size() == 1) {
        return true;
    }
    else {
        return false;
    }
}