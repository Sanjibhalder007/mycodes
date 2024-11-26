def sum(a,b):
    return a+b
def sub(a,b):
    return a-b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b
def fact(n):
    f=1
    while(n>0):
        f=f*n
        n -=1
    return f
def armngstrong(n):
    num=n
    flag=0
    count=0
    while(num>0):
        num=num/10
        count +=1
        num=int(num)
    num=n
    num2=n
    count2=count
    while(count>0):
        num2=num%10
        num=int(num/10)
        flag +=pow(num2,count2)
        count -=1
    return flag
        

while(True):  
    print("Enter Your Choice:")
    num1=int(input("1.for sum.\n2.for sub.\n3.for mul.\n4.for div.\n5.for factorial.\n6.for armngstrong check.\n\n\n"))
    if num1==1:
        num2=int(input("\n enter first no:"))
        num3=int(input("\n enter second number:"))
        print("Addition=",sum(num2,num3))
    elif num1==2:
         num3=int(input("\n enter first no:"))
         num2=int(input("\n enter second number:"))
         print("Subtraction=",sub(num3,num2))
    elif num1==3:
         num3=int(input("\n enter first no:"))
         num2=int(input("\n enter second number:"))
         print("Multiplication=",mul(num3,num2))
    elif num1==4:
          num2=int(input("\n enter first no:"))
          num3=int(input("\n enter second number:"))
          print("Division=",div(num2,num3))
    elif num1==5:
             
         num1=int(input("Enter your number:"))
         print("Factorial=",fact(num1))
    else:
        num1=int(input("Enter your number:"))
        num2=armngstrong(num1)
        if num1==num2:
            print(num1,"is armngstring number....")
        else:
             print(num1,"is not aarmngstrong number.....")
     
     




