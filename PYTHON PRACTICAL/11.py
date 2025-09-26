# Write a Program to check if the input year is a leap or not
print("Leap year" if (year:=int(input("Enter year : ")))%4==0 and year%100!=0 or year%400==0 else "Not leap year")
