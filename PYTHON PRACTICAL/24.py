# Using NumPy, write a program to make 1 Dim Array, load it with numbers, and perform the operation of Iteration and Slicing on it.
import numpy as np
l=[]
for i in range(int(input("Enter number of columns: "))):
    l.append(int(input("Enter the number: ")))
arr=np.array(l)
print("Iterating through the array:")
for i in arr:
    print(i)
s=int(input("Enter the starting index of slice: "))
e=int(input("Enter the ending index of slice: "))
print("Slicing the array:", arr[s:e+1])