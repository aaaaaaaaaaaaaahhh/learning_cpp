#include <iostream>

using namespace std;

int main() {
    int var1 = 1;
    int var2 = 30;
    if (& var1 < & var2) {
        cout << & var1 << endl;
        cout << & var2;
    } else {
        cout << & var2 << endl;
        cout << & var1;
    }
}