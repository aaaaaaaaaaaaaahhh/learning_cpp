#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int guess = -1;
    int actual = rand() % 100;
    while(guess != actual) {
        cout << "your guess: ";
        cin >> guess;
        if (guess > actual) {
            cout << "your guess was higher than the acutal" << endl;
        } else if (guess < actual) {
            cout << "your guess was lower than the acutal" << endl;
        } else {
            cout << "you guessed right!!";
        }
    } 
}