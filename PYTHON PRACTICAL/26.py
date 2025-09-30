# Using Filter function, write a program to display multiple of 5 from a given array.
def multiple_of_five(num):
    return num%5==0
l=eval(input("Enter a list of numbers: "))
filtered_numbers=list(filter(multiple_of_five, l))
print("Filtered numbers (multiple of 5):", filtered_numbers)