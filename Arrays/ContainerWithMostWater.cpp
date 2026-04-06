#include <iostream>
using namespace std;

int maxWater(int height[], int n) {
    int maxWater = 0;
    int lp = 0;
    int rp = n - 1;

    while(lp < rp) {
        int width = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = width * ht;

        maxWater = max(maxWater, currWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;

}
int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int MW = maxWater(height, n);
    cout << "Most water fill by the container is: " <<  MW << endl;

    return 0;
}
