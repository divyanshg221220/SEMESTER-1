#Write a Program to check if the input year is a leap or not
print("Leap year" if (a:=int(input("Enter year : ")))%4==0 and a%100!=0 or a%400==0 else "Not leap year")
