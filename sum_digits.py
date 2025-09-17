#!/usr/bin/env python3
"""
Program to sum the digits in an integer between 1 and 999.
Uses the % operator to extract digits and / operator to remove extracted digits.
"""

def sum_digits(number):
    """
    Calculate the sum of all digits in a number using modulo and division operations.
    
    Args:
        number (int): The integer whose digits to sum
        
    Returns:
        int: The sum of all digits
    """
    total = 0
    
    # Extract hundreds digit
    hundreds = number // 100
    total += hundreds
    
    # Remove hundreds digit and extract tens digit
    remaining = number % 100
    tens = remaining // 10
    total += tens
    
    # Extract ones digit
    ones = number % 10
    total += ones
    
    return total

def main():
    """Main function to handle user input and display results."""
    try:
        # Get input from user
        number = int(input("Enter an integer between 1 and 999: "))
        
        # Validate input range
        if number < 1 or number > 999:
            print("Error: Please enter an integer between 1 and 999.")
            return
        
        # Calculate sum of digits
        digit_sum = sum_digits(number)
        
        # Display result
        print(f"The sum of the digits in {number} is {digit_sum}")
        
        # Show the breakdown for clarity
        hundreds = number // 100
        tens = (number % 100) // 10
        ones = number % 10
        
        if hundreds > 0:
            if tens > 0:
                print(f"Breakdown: {hundreds} + {tens} + {ones} = {digit_sum}")
            else:
                print(f"Breakdown: {hundreds} + {ones} = {digit_sum}")
        else:
            if tens > 0:
                print(f"Breakdown: {tens} + {ones} = {digit_sum}")
            else:
                print(f"Breakdown: {ones} = {digit_sum}")
                
    except ValueError:
        print("Error: Please enter a valid integer.")

if __name__ == "__main__":
    main()