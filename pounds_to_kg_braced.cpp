#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables using braced initialization
    double pounds{0.0};      // pounds to convert (initialized to 0.0)
    double kilograms{0.0};   // result in kilograms (initialized to 0.0)
    
    // Conversion factor: 1 pound = 0.454 kilograms
    const double CONVERSION_FACTOR{0.454};
    
    // Prompt user for input
    cout << "Enter a number in pounds: ";
    cin >> pounds;
    
    // Convert pounds to kilograms using arithmetic operator
    kilograms = pounds * CONVERSION_FACTOR;
    
    // Display the result
    cout << pounds << " pounds is " << kilograms << " kilograms" << endl;
    
    return 0;
}