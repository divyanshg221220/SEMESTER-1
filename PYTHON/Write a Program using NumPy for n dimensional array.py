# Write a Program using NumPy for n dimensional array
import numpy as np
n=int(input("Enter dimension of array: "))
s="["*n
for i in range(m:=int(input("Enter number of elements you want to enter: "))):
    s+=input("Enter the element: ")
    if i!=m-1:
        s+=","
s+="]"*n
arr=np.array(eval(s))
print(arr)