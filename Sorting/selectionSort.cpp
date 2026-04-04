#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
    for(int i = 0; i < n-1; i++) {
        int smallestIdx = i;
        for(int j = i+1; j < n; j++) {
            if(array[j] < array[smallestIdx]) {
                smallestIdx = j;
            }
        }

        swap(array[i], array[smallestIdx]);
    }
}

void printArray(int array[], int n) {
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {4, 1, 3, 5, 2};
    int n = 5;

    selectionSort(array, n);
    printArray(array, n);


    return 0;
}