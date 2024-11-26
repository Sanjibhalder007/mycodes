list=[]
n=int(input("\n enter length:"))
for i in range(n):
    
    num=int(input(f"\n enter {i+1} value:"))
    list.append(num)

print(list)

i=0
while i<n:
    print(f"\n value {i+1} off array is {list[i]}")
    i +=1



