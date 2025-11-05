# Using Filter function, write a program to filter the elements which are greater than 9.
l=eval(input("Enter a list of numbers: "))
filtered_numbers=list(filter(lambda x:x>9, l))
print("Filtered numbers (greater than 9):", filtered_numbers)