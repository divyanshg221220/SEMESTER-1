# Write a program to create an Array of Even numbers till 14. Display the contents of array, compute the length of array and also show how to delete a element from the desired position from the array.
even_numbers=[i for i in range(15) if i%2==0]
print("Even numbers till 14 are:", even_numbers)
print("Length of array is:", len(even_numbers))
position=int(input("Enter the position of element to delete (0-{}): ".format(len(even_numbers)-1)))
if 0<=position<len(even_numbers):
    del even_numbers[position]
    print("Array after deletion:", even_numbers)
else:
    print("Invalid position")