#include <iostream>
using namespace std;

vector<int> productArray(vector<int> nums, int n) {
    vector<int> ans(n, 1);

    for(int i = 1; i < n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;
    for(int i = n-2; i>=0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;   
    }
    return ans;
 }

void printArray(vector<int> ans, int n) {
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
    }
int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = 4;

    vector<int> ans = productArray(nums, n);
    printArray(ans, n);

    return 0;
}
