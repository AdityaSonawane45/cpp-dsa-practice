#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char ch) {
    if((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
}

bool isPalindrome(string str, int n) {

    int st = 0, end = n-1;

    while(st < end) {
    if(!isAlphaNum(str[st])) {
        st++; continue;
    }

    if(!isAlphaNum(str[end])) {
        end--; continue;
    }

    if(tolower(str[st]) != tolower(str[end])) {
        return false;
    }
    st++; end--;

}
    return true;
}    


int main() {
    string str = "Ac3?e3c&a";
    int n = 9;

    
    //cout << "Result is: " << isPalindrome(str, n) << endl;

      if(isPalindrome(str, n)) {
        cout << "String is palindrome" << endl;
    } else {
        cout << "String is not palindrome" << endl;
    }
    return 0;
}
