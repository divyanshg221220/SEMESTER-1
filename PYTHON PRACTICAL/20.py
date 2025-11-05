# Write a Program to create a file called “Input.txt”, perform the write/read operation in it with a string “Computer Science”.
with open("Input.txt", "w") as f:
    f.write("Computer Science")
with open("Input.txt", "r") as f:
    print(f.read())