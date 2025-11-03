# Using NumPy, write a program to create two 1 Dim Array and perform the operation of Iteration, Sorting the contents of array and concatenating the contents of the array.
import numpy as np
a = np.array([int(x) for x in input("Enter elements of first array separated by space: ").split()])
b = np.array([int(x) for x in input("Enter elements of second array separated by space: ").split()])
print("First array elements:")
for i in a:
    print(i)
print("Second array elements:")
for i in b:
    print(i)
a.sort()
b.sort()
print("Sorted first array:", a)
print("Sorted second array:", b)
c = np.concatenate((a, b))
print("Concatenated array:", c)