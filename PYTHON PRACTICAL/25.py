# Using Filter function, write a program to filter the elements which are greater than 9.
def greater_than_nine(num):
    return num>9
l=eval(input("Enter a list of numbers: "))
filtered_numbers=list(filter(greater_than_nine, l))
print("Filtered numbers (greater than 9):", filtered_numbers)