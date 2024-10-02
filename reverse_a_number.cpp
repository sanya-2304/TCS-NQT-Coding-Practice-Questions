#include <iostream>
using namespace std;

void rev(int num, int &revnum) {
    while (num != 0) {
        int digit = num % 10;
        revnum = revnum * 10 + digit;
        num = num / 10;
    }
}

int main() {
    int num;
    cout << "Enter num: ";
    cin >> num;
    cout << "Num: " << num << endl;

    int revnum = 0;
    rev(num, revnum);  
    cout << "Reversed num: " << revnum << endl;

    return 0;
}
