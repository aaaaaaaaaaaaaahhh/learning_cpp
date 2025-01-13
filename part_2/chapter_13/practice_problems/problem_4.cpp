#include <iostream>

using namespace std;

int multiplication_and_addition(int val1, int val2, int& sum) {

    sum = val1 + val2;
    return val1 * val2;
}

int main() {
    int val1 = 5;
    int val2 = 10;
    int sum = 0;
    int product = multiplication_and_addition(val1, val2, sum);
    cout << "product: " << product << endl;
    cout << "sum: " << sum << endl;
}