# Write a Program to check if the given number is Armstrong number or not. Example of Armstrong number are :- 153, 370, 371 etc.
num=int(input("Enter a number: "))
sum=0
for i in str(num):
    sum+=int(i)**3
if num==sum:
    print(num,"is an Armstrong number")
else:
    print(num,"is not an Armstrong number")