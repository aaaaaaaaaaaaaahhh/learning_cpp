#include <iostream>

using namespace std;

int main() {
    int password1 = 10;
    int password2 = 42069;
    int guess;

    cout << "password: ";
    cin >> guess;

    
    if (guess == password1 || guess == password2) {
        cout << "right password dog";
    }
}   