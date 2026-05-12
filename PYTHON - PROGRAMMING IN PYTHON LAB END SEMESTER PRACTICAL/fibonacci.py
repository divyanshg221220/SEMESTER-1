def fibonacci(n,a=0,b=1,count=1):
    print(a)
    if count==n:
        return
    else:
        count+=1
        fibonacci(n,a=b,b=a+b,count=count)
n=int(input("Enter a number: "))
fibonacci(n)