#include <iostream>
using namespace std;

void insertionSort(int array[], int n) {

    for(int i = 1; i < n; i++) {
        int curr = array[i];
        int prev = i - 1;

        while(prev >= 0 && array[prev] > curr) {
            array[prev+1] = array[prev];
            prev--;
        }

        array[prev+1] = curr;
    }
}

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {4, 1, 5, 2, 3};
    int n = 5;

    insertionSort(array, n);
    printArray(array, n);


    return 0;
}