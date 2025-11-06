# Using NumPy, initialize the array and display their dimensionality.
import numpy as np
arr=np.array([int(x) for x in input("Enter elements of the array separated by space: ").split()])
print("Array:",arr)
print("Dimensionality of the array:",arr.ndim)