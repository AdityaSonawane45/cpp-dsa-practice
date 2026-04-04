#include <iostream>
#include <vector>
using namespace std;

int linearSeach(vector<int>& numbers, int sz2, int Target) {
    for(int j = 0; j < sz2; j++) {
        if(numbers[j] == Target) {
            return j;
        }
    }

    return -1;
}

int main() {
    vector<int> vec = {1, 2, 3};
    cout << "vector index is: " << vec[1] << endl;

    //for each loop
    for(int i: vec) {
        cout << i << " ";
    }
    cout << endl;

    //for char
    vector<char> vect = {'a', 'b', 'c', 'd', 'e'};

    for(char val: vect) {
        cout << val << " ";
    }

    cout << endl;

    vector<int> vecto;
    cout << "size: " << vecto.size() << endl;
    vecto.push_back(25);
    vecto.push_back(35);
    vecto.push_back(45);
    vecto.push_back(55);
    cout << "After push back , Size: " << vecto.size() << endl;

    vecto.pop_back();
    vecto.front();
    vecto.back();

    for(int value: vecto) {
        cout << value << endl;
    }

    cout << "front value: " << vecto.front() << endl;
    cout << "back value: " <<  vecto.back() << endl;
    cout << "Index value: " << vecto.at(1) << endl;

    //static vs dynamic allocation
    vector<int> num;

    num.push_back(0);
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);

    cout << "Size: " << num.size() << endl;
    cout << "Capacity:" << num.capacity() << endl;

    vector<int> numbers = {2, 10, 65, 75, 53, 21};
    int sz2 = 6;
    int Target = 75;

    cout << "Targeted number is: " << linearSeach(numbers, sz2, Target) << endl;



    return 0;
}

