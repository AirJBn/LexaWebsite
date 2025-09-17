#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the number and digits
    int number;
    int hundreds, tens, ones;
    int sum;
    
    // Ask user for input
    cout << "Enter an integer between 1 and 999: ";
    cin >> number;
    
    // Extract the hundreds digit
    // For 932: 932 / 100 = 9
    hundreds = number / 100;
    
    // Extract the tens digit
    // For 932: (932 % 100) gives us 32, then 32 / 10 = 3
    tens = (number % 100) / 10;
    
    // Extract the ones digit
    // For 932: 932 % 10 = 2
    ones = number % 10;
    
    // Calculate the sum of all digits
    sum = hundreds + tens + ones;
    
    // Display the result
    cout << "The sum of the digits in " << number << " is " << sum << endl;
    
    // Show the breakdown (optional - helps understand the process)
    cout << "Breakdown: " << hundreds << " + " << tens << " + " << ones << " = " << sum << endl;
    
    return 0;
}