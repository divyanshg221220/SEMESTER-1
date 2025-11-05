# Write a Program to create a two list and perform the following operation's:
# 1) Add the Elements of the two list.
# 2) Compare the contents of the two list.
# 3) to find the number of the elements in the list.
# 4) Sort the elements of the list
# 5) Reverse the contents of the List.
list1=eval(input("Enter the elements of first list : "))
list2=eval(input("Enter the elements of second list : "))
q=int(input("Choose an operation to perform:\n1. Add the Elements of the two list\n2. Compare the contents of the two list\n3. Find the number of the elements in the list\n4. Sort the elements of the list\n5. Reverse the contents of the List\nEnter your choice (1-5) : "))
while True:
    if q not in [1,2,3,4,5]:
        print("Invalid input")
        q=int(input("Choose an operation to perform:\n1. Add the Elements of the two list\n2. Compare the contents of the two list\n3. Find the number of the elements in the list\n4. Sort the elements of the list\n5. Reverse the contents of the List\nEnter your choice (1-5) : "))
    else:
        break
if q==1:
    temp=[]
    for i,j in zip(list1,list2):
        temp.append(i+j)
    print("Addition of two lists is :",temp)
elif q==2:
    if list1==list2:
        print("Lists are equal")
    else:
        print("Lists are not equal")
elif q==3:
    print("Number of elements in first list is :",len(list1))
    print("Number of elements in second list is :",len(list2))
elif q==4:
    print("Sorted first list is :",sorted(list1))
    print("Sorted second list is :",sorted(list2))
elif q==5:
    print("Reversed first list is :",list1[::-1])
    print("Reversed second list is :",list2[::-1])