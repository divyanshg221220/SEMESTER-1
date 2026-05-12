n=int(input("Enter a number: "))
sum=0
for i in str(n):
    sum+=int(i)**len(str(n))
if sum==n:
    print("Armstrong number")
else:
    print("Not Armstrong number")