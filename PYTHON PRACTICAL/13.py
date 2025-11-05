# Write a Program to generate Fibonacci series till 100.
a,b=0,1
l=[]
while a<=100:
    l+=[a]
    a,b=b,a+b
print("Fibonacci series : ",l)
