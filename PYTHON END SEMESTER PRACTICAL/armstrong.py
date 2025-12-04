n=int(input("Enter a number: "))
sum=0
for i in str(n):
    sum+=int(i)**len(str(n))
if sum==n:
    print(n,"is an Armstrong number")
else:
    print(n,"is not an Armstrong number")