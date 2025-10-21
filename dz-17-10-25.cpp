#include <iostream>
#include <time.h>
using namespace std;

template <class T>
void Init(T** arr, int _size) {
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            arr[i][j] = rand() % 5;
        }
    }
}

template <class T>
void Print(T** arr, int _size) {
    for (int i = 0; i < _size; i++) {
        for (int j = 0; j < _size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(NULL));

    int size = 5;
    int** arr = new int*[size];
    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    Init(arr, size);
    Print(arr, size);

    delete[] arr;
}