#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    int last_guess = 0;
    int guess = 100 / 2;
    int actual = rand() % 100;
    int thing = 0;
    cout << actual << endl;
    while(thing < 50) {
        int guess_placeholder = guess;
        if (guess > actual) {
            guess = guess - ((guess - last_guess) / 2);
            cout << "guess was too high" << endl;
        } else if (guess < actual) {
            guess = guess + ((guess - last_guess) / 2);
            cout << "guess was too low" << endl;
        } else {
            cout << "it guessed right!!";
        }
        last_guess = guess_placeholder;
        thing++;
    } 
}