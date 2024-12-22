#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int heads_count = 0;
    int tails_count = 0;
    for (int i = 0; i < 10000; i++){
        int flip = (rand() % 10);
        cout << "Coin flip " << i << ": ";
        if (flip <= 4){
            heads_count++;
            cout << "heads " << flip << endl;
        } else {
            tails_count++;
            cout << "tails " << flip << endl;
        }
    }
    cout << "number of tails: " << tails_count << endl;
    cout << "number of heads: " << heads_count;

}