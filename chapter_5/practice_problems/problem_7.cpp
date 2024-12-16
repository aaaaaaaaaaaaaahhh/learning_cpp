#include <iostream>
#include <string>

using namespace std;

int main() {
    string question;
    double tally1 = 0;
    double tally2 = 0;
    double tally3 = 0;

    cout << "question: ";
    getline(cin, question, '\n');

    int answer = -1;
    while (answer != 0) {
        cout << "vote: ";
        cin >> answer;
        if (answer == 1) {
            tally1++;
        } else if (answer == 2) {
            tally2++;
        } else if (answer == 3) {
            tally3++;
        } else if (answer == 0) {
            cout << "vote over";
            break;
        } else {
            cout << "enter a number between 0 and 3 \n";
        }
    }

    int total_votes = tally1 + tally2 + tally3;

    cout << "results for the question: \n" << question << "\n -----------------------------------------------\n";
    cout << "option 1: " << (tally1 / total_votes) * 100 << " ";
    for (int i = 0; i < (int)((tally1 / total_votes) * 100); i++) {
        cout << '#';
    }
    cout << endl;

    cout << "option 2: " << (tally2 / total_votes) * 100 << " ";
    for (int i = 0; i < (int)((tally2 / total_votes) * 100); i++) {
        cout << '#';
    }
    cout << endl;

    cout << "option 3: " << (tally3 / total_votes) * 100 << " ";
    for (int i = 0; i < (int)((tally3 / total_votes) * 100); i++) {
        cout << '#';
    }
    cout << endl;
}