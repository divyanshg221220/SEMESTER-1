# Write a Program that receives marks of a students for a subject as input and assign the grde A||B||C||D||E||F 
marks=float(int(input("Enter marks : ")))
if marks>=90:
    grade='A'
elif marks>=80:
    grade='B'
elif marks>=70:
    grade='C'
elif marks>=60:
    grade='D'
elif marks>=50:
    grade='E'
else:
    grade='F'
print("Grade :",grade)