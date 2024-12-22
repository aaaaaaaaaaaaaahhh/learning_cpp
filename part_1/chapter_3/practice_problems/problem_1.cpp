#include <iostream>
#include <string>

using namespace std;

int main () {
    string name;
    cout << "write your name: ";
    getline(cin, name, '\n');
    cout << name;
}