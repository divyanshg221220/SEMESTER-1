# Write a Program to perform string manupulation operations using set of pre-defined functions such as:
# a) Find()
# b) Upper()
# c) Len()
# d) Max() and Min()
# e) Fetching a specific content from the String 
s=input("Enter a string : ")
q=int(input("Choose an operation to perform:\n1. Find\n2. Upper\n3. Len\n4. Max and Min\n5. Fetching a specific content from the String\nEnter your choice (1-5) : "))
while True:
    if q not in [1,2,3,4,5]:
        print("Invalid input")
        q=int(input("Choose an operation to perform:\n1. Find\n2. Upper\n3. Len\n4. Max and Min\n5. Fetching a specific content from the String\nEnter your choice (1-5) : "))
    else:
        break
if q==1:
    c=input("Enter a character to find : ")
    print("Index of",c,"is",s.find(c))
elif q==2:
    print("Uppercase string is :",s.upper())
elif q==3:
    print("Length of string is :",len(s))
elif q==4:
    print("Maximum character is :",max(s))
    print("Minimum character is :",min(s))
elif q==5:
    i=int(input("Enter starting index : "))
    j=int(input("Enter ending index : "))
    print("Substring is :",s[i:j])