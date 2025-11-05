# Write a Program to create a file called “Input.txt”, initialize it with a string of your choice and perform the read operation to read only the first 3 characters from the file.
with open("Input.txt", "w") as f:
    f.write(input("Enter a string to write in file: "))
with open("Input.txt", "r") as f:
    print(f.read(3))