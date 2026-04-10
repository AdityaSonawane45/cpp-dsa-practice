#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<char> &str, int n) {
    int st = 0, end = n - 1;

    while (st < end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }
}

void printArray(vector<char> str, int n) {
    for(int i = 0; i < n; i++) {
        cout << str[i] << " ";
    }

}

int main() {
    vector<char> str = {'A', 'D', 'I', 'T', 'Y', 'A'};
    int n = 6;

    reverseArray(str, n);
    printArray(str, n);

    return 0;
}
