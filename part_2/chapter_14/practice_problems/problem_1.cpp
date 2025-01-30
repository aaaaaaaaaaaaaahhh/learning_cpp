#include <iostream>

using namespace std;

int main() {
    int num_rows;
    int num_columns;

    cout << "rows: ";
    cin >> num_rows;
    cout << "columns: ";
    cin >> num_columns;

    int **p_p_rows = new int*[num_rows];
    for (int i = 0; i < num_rows; i++) {
        p_p_rows[i] = new int[num_columns];
    }

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_columns; j++) {
            p_p_rows[i][j] = (j + 1) * (i + 1);
        }
    }

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_columns; j++) {
            cout << p_p_rows[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < num_rows; i++) {
        delete p_p_rows[i];
    }

    delete[] p_p_rows;


}