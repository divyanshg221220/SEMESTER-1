# Using Filter function, write a program to display multiple of 5 from a given array.
l=eval(input("Enter a list of numbers: "))
filtered_numbers=list(filter(lambda x:x%5==0, l))
print("Filtered numbers (multiple of 5):", filtered_numbers)