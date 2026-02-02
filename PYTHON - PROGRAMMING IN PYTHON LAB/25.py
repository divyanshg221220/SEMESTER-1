# Using NumPy, initialize the array and display their dimensionality.
import numpy as np
shape=[]
dim=int(input("Enter number of dimensions: "))
total_elements=1
for i in range(dim):
    n=int(input(f"Enter size for dimension {i+1}: "))
    shape.append(n)
    total_elements*=n
l=[]
for i in range(total_elements):
    l.append(eval(input("Enter the element: ")))
arr=np.array(l).reshape(shape)
print("Array:\n",arr)
print("Dimensionality of the array:",arr.ndim)