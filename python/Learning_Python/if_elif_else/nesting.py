num1=int(input("\n enter A number:"))
num2=int(input("\n enter A number:"))
num3=int(input("\n enter A number:"))
num4=int(input("\n enter A number:"))

if(num1>num2):
    if(num1>num3 and num1>num4):
        greater=num1
    elif(num3>num1 and num3>num4 and num3>num2):
        greater=num3
    elif(num4>num3 and num4>num1 and num4>num2):
        greater=num4
else:
    greater=num2
print("\n greater number is:",greater)






