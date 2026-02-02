# Write a Program to perform to test and check the mathematical functions such as:
# a) Ceil()
# b) Sqrt()
# c) Pow()
# d) Factorial()
import math
n=float(input("Enter a number : "))
q=int(input("Choose an operation to perform:\n1. Ceil\n2. Sqrt\n3. Pow\n4. Factorial\nEnter your choice (1-4) : "))
while True:
    if q not in [1,2,3,4]:
        print("Invalid input")
        q=int(input("Choose an operation to perform:\n1. Ceil\n2. Sqrt\n3. Pow\n4. Factorial\nEnter your choice (1-4) : "))
    else:
        break
if q==1:
    print("Ceil value of",n,"is",math.ceil(n))
elif q==2:
    print("Square root of",n,"is",math.sqrt(n))
elif q==3:
    print("Power value of",n,"is",math.pow(n,int(input("Enter the power value : "))))
elif q==4:
    print("Factorial of",int(n),"is",math.factorial(int(n)))