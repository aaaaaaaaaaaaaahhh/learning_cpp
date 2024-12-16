#include <iostream>

using namespace std;

int main() {
    int age1;
    int age2;
    
    cout << "Age 1: ";
    cin >> age1;
    
    cout << "Age 2: ";
    cin >> age2;
    
    if (age1 > 100 && age2 > 100) {
        cout << "wow you guys are old";
    } else {
        if (age1 > age2) {
            cout << "dude 1 you are older";
        } else if (age2 > age1) {
            cout << "dude 2 you are older";
        } else {
            cout << "you guys are the same age!!";
        }
    }
}