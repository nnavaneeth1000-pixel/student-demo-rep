a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)

if b != 0:
    print("Division:", a / b)
    print("Floor Division:", a // b)
    print("Modulus:", a % b)
else:
    print("Error: Division by zero is not allowed")
    print("Error: Floor division by zero is not allowed")
    print("Error: Modulus by zero is not allowed")

print("Power:", a ** b)