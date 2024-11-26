num1=int(input("Enter 1st number:"))
num2=int(input("Enter 2nd number:"))
num3=int(input("Enter 3rd number:"))

if(num1>num2 and num1>num3):
    print("greater is:",num1)
elif(num2>num3 and num2>num1):
    print("greater is:",num2)
else:
    print("greater is:",num3)
