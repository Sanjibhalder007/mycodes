import array as arr[]
num=int(input("\n Enter length of array:"))
i=0
while i<num:
    num1=int(input("Enter array element:"))
    arr[i]=num1
    i +=1
num2=int(input("\n Enter searching element:"))
i=0
while i<num:
    if arr[i] == num2:
        print("\n element is at position:",i+1)
        break;
    else:
        print("\n element not present!!!!")

num3=int(input("\n Enter element which you would't print:"))
i=1
while i<11:
    if i==num3:
        continue
    print(i)
    i +=1


