#include <iostream>
using namespace std;

int fib(int n) {
    if(n<2) {
        return n;
    }

    return fib(n-2) + fib(n-1);
}

int main() {
    int a;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "The fibbonacci number at position " << a << " is " << fib(a) << endl;

    return 0;
}