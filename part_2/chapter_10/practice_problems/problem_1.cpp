#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int find_index_of_least(int array[], int size, int index);
void swap(int array[], int index1, int index2);
void insertion_sort(int array[], int size);

int main() {
    srand(time(NULL));
    int size = 10;
    int array[size];
    cout << "before sorting:" << endl;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        cout << "the " << i << "th element: " << array[i] << endl;
    }

    cout << "after sorting:" << endl;

    insertion_sort(array, size);

    for (int i = 0; i < size; i++) {
        cout << "the " << i << "th element: " << array[i] << endl;
    }


}

void insertion_sort(int array[], int size) {
    
    for (int i = 0; i < size; i++) {
        int lowest_index = find_index_of_least(array, size, i);
        swap(array, i, lowest_index);
    }

}

void swap(int array[], int index1, int index2) {
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

int find_index_of_least(int array[], int size, int index) {
    
    int lowest_int_index = index;
    
    for (int i = index; i < size; i++) {
        if (array[i] < array[lowest_int_index]) {
            lowest_int_index = i;
        }
    }

    return lowest_int_index;
}