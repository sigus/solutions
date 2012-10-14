#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> primes(1, 2);
    long long int s = 2;
    for (int i = 3; i < 2000000; i++) {
        bool is_prime = true;
        double r = sqrt(i + 0.0);
        for (int j = 0; primes[j] <= r; j++)
            if (!(i%primes[j])) {
                is_prime = false;
                break;
            }
        if (is_prime)
            primes.push_back(i), s += i;
    }
    cout << s << endl;
}

