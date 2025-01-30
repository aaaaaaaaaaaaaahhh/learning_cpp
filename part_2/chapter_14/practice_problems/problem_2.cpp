#include <iostream>

using namespace std;

void array_maker(int length, int width, int height) {

    int ***p_p_p_length = new int**[length];
    for (int i = 0; i < length; i++) {
        p_p_p_length[i] = new int*[width];
        for (int j = 0; j < width; j++) {
            p_p_p_length[i][j] = new int[height];
        }
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < height; k++) {
                p_p_p_length[i][j][k] = (i + 1) * (j + 1) * (k + 1);
            }
        }
    }


    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < height; k++) {
                cout << p_p_p_length[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            delete[] p_p_p_length[i][j];
        }
        delete[] p_p_p_length[i];
    }

    delete[] p_p_p_length;

}

int main() {
    array_maker(3, 2, 2);

}