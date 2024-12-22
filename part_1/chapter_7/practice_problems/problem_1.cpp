#include <iostream>
#include <string>

using namespace std;

// this is just up to a million because no arrays
// and i don't know the words for numbers arbitrarily high
int main() {
    string number;
    cout << "Type the number: ";
    cin >> number;
    int counter = number.length();
    while (counter >= 0) {
        
        counter -= 3;
    }
    
}