#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double pounds;
    double kilograms;
    
    // Conversion factor: 1 pound = 0.454 kilograms
    const double CONVERSION_FACTOR = 0.454;
    
    // Prompt user for input
    cout << "Enter a number in pounds: ";
    cin >> pounds;
    
    // Convert pounds to kilograms
    kilograms = pounds * CONVERSION_FACTOR;
    
    // Display the result
    cout << pounds << " pounds is " << kilograms << " kilograms" << endl;
    
    return 0;
}