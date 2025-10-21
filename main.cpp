#include <iostream>
#include <ctime>
using namespace std;

void Init(int arr[], int _size);
void Print(int arr[], int _size);
void Chenge(int arr[], int _size);

void Init(int arr[], int _size) {
    for(int i = 0; i < _size; i++) {
        arr[i] = rand() % 13;
    }
}

void Print(int arr[], int _size) {
    for(int i = 0; i < _size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void Chenge(int arr[], int _size) {
    for(int i = 0; i < _size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[_size - 1 - i];
        arr[_size - 1 - i] = temp;
    }
}

int main() {
    srand(time(NULL));
    const int size = 10;
    int arr[size];

    Init(arr, size);
    cout << "Исходный массив:" << endl;
    Print(arr, size);
    
    Chenge(arr, size);
    cout << "После изменения:" << endl;
    Print(arr, size);
    
    return 0;
}