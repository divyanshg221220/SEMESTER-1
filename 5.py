#WAP to check if the I/P year is leap or not.
a = int(input("Enter year : "))
print("Leap Year" if (a%4==0 and a%100!=0) or (a%400==0) else "Not Leap Year")