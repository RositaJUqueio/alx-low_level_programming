#!/usr/bin/python3
num1 = int(input("enter the first number: "))
num2 = int(input("Enter the second number: "))
total = 0
palindrome = 0

for i in range(num1, num2 + 1):
    for x in range(i, num2 + 1):
        total = i * x
        if total > palindrome and str(total) == str(total)[::-1]:
            palindrome = total
with open("102-result", "w") as file:
    file.write(str(palindrome))
