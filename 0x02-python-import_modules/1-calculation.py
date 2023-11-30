#!/usr/bin/python3
from calculator_1 import add, sub, mul, div
a = 10
b = 5

import calculator_1

# Call the add function from calculator_1 module
add_result = calculator_1.add(a, b)

# Call the subtract function from calculator_1 module
sub_result = calculator_1.subtract(a, b)

# Call the multiply function from calculator_1 module
mul_result = calculator_1.multiply(a, b)

# Call the divide function from calculator_1 module
div_result = calculator_1.divide(a, b)

# Print the result of addition
print("Addition: {} + {} = {}".format(a, b, add_result))

# Print the result of subtraction
print("Subtraction: {} - {} = {}".format(a, b, sub_result))

# Print the result of multiplication
print("Multiplication: {} * {} = {}".format(a, b, mul_result))

# Print the result of division
print("Division: {} / {} = {}".format(a, b, div_result))
