# Using NumPy, write a program to create Multi-Dim Array, load it with the numbers and display the content of it. 
import numpy as np
l=[]
row=int(input("Enter number of rows: "))
column=int(input("Enter number of columns: "))
for i in range(row):
    temp=[]
    for j in range(column):
        temp.append(int(input("Enter the number: ")))
    l.append(temp)
arr=np.array(l)
print("Array:",arr)