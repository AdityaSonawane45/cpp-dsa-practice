#include <iostream>
using namespace std;

//Pass by reference
    void check(int arr1[], int SSize) {
        cout << "In fucntion" << endl;
        for(int l = 0; l < SSize; l++) {
            arr1[l] = 2 * arr1[l];
        }
    }

    int linearSearch(int arr2[], int sz, int target) {
        for(int m = 0; m < sz; m++) {
            if(arr2[m] == target) {
                return m;
            }
        }

        return -1;
    }

    void reverseArray(int arr3[], int sz1) {
        int start = 0;
        int end = sz1-1;

        while (start < end)
        {
            swap(arr3[start], arr3[end]);
            start++;
            end--;
        }
        
    }

int main() {

    // int array[5] = {11, 33, 565, 77, 99};

    // cout << "Array: " << array[2] << endl;

    // //loop array
    // for(int i = 0; i < 5; i++) {
    //     cout << array[i] << endl;
    // }

    // //
    // int size = 5;
    // int num[size];
    // for(int j = 0; j < 5; j++) {
    //     cin >> num[j];
    // }

    // for(int j = 0; j < 5; j++) {
    //     cout << num[j] << " ";
    // }

    // cout << endl;

    // //smallesat and largest number

    // int nums[] = {5, 22, 1, -14, 24, 10};
    // int Size = 6;

    // int smallest = INT_MAX;
    // int largest = INT_MIN;

    // for(int k = 0; k < Size; k++) {
    //     if (nums[k] < smallest) {
    //         smallest = nums[k];
    //     }
    // }

    //   for(int k = 0; k < Size; k++) {
    //    largest = max(largest, nums[k]);
    // }
  
    // cout << "Smallest number is: " << smallest << endl;
    // cout << "largest number is: " << largest << endl;

    // //Pass by reference

    // int arr1[] = {1, 2, 3};

    // check(arr1, 3);
    // cout << "in main  function" << endl;
    // for(int l = 0; l < 3; l++) {
    //     cout << arr1[l] << endl;
    // }

    // cout << endl;

    int arr2[] = {2, 8, 65, 9, 1, 65};
    int sz = 6;
    int target = 69;

    cout << "Target number is: " << linearSearch(arr2, sz, target) << endl;


    int arr3[] = {2, 8, 65, 9, 1, 65, 55, 87,10, 87};
    int sz1 = 10;

    reverseArray(arr3, sz1);

    for(int n = 0; n < sz1; n++) {
        cout << arr3[n] << " ";
    }
    cout << endl;
    
    return 0;
}
