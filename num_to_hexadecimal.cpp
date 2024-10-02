#include <iostream>
using namespace std;

// Function to convert a decimal number to hexadecimal
void decimalToHexadecimal(int number) {
    // Array to store hexadecimal digits
    char hexDigits[100]; 
    int index = 0;

    // Handle the case of 0 explicitly
    if (number == 0) {
        cout << "Hexadecimal representation: 0" << endl;
        return;
    }

    // Convert decimal to hexadecimal
    while (number != 0) {
        int remainder = number % 16; // Get remainder
        // Convert remainder to corresponding hex character
        if (remainder < 10) {
            hexDigits[index] = remainder + '0'; // Convert to character '0' to '9'
        } else {
            hexDigits[index] = remainder - 10 + 'A'; // Convert to character 'A' to 'F'
        }
        index++;
        number /= 16; // Reduce number by dividing it by 16
    }

    // Print hexadecimal representation in reverse order
    cout << "Hexadecimal representation: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << hexDigits[i];
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    decimalToHexadecimal(number);

    return 0;
}
