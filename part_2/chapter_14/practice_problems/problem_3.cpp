#include <iostream>

using namespace std;

int main() {

    int array[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "i: " << i << " j: " << j << " address: " << &array[i][j] << endl;
        }
    }
}