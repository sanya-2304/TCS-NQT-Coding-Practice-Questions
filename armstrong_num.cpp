#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int totalDigits = 0;

    // Calculate the total number of digits
    while (originalNum > 0) {
        originalNum /= 10;
        totalDigits++;
    }

    originalNum = num; // Reset originalNum to the input number

    // Calculate the sum of the digits raised to the power of totalDigits
    while (originalNum != 0) {
        int digit = originalNum % 10;

        // Use pow and cast to int to avoid precision issues
        sum += static_cast<int>(pow(digit, totalDigits)); // Calculate digit^totalDigits
        originalNum /= 10;
    }

    // Debug output to verify calculations
    cout << "Total digits: " << totalDigits << endl;
    cout << "Sum of powers: " << sum << endl;

    // Check if the sum is equal to the original number
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
