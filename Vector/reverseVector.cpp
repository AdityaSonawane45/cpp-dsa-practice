#include <iostream>
using namespace std;

void reverseVector(vector<int> &nums, int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

int main() {
    
    vector<int> nums = {1, 3, 5, 7 ,9, 11};
    int size = 6;
    
    reverseVector(nums, size);
     for(int i = 0; i < size; i++) {
        cout << nums[i] << " ";
     }

     cout << endl;

    return 0;
}
