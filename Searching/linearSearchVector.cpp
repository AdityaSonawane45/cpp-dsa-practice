#include <iostream>
using namespace std;
int linearSearch(vector<int> nums, int size, int target) {
    for(int i = 0; i < size; i++) {
        if(nums[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    vector<int> nums = {1, 5, 87, 43, 98, 32, 76};
    int size = 7;
    int target = 432;

    cout << "tageted number is: " << linearSearch(nums, size, target) << endl;

    return 0;
}
