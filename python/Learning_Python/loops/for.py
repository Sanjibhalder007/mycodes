list=[1,2,3,4]

for el in list:
    print(el)

tup=(1,2,5,4)
for el in tup:
    print(el)
else:
    print("\n all element in tup is priented")

nums=[2,4,3,5,6,4,7,6,]
for i in nums:
    print(i)
flag1=1
num=int(input("\n Enter searching element:"))
for i in range(len(nums)):
    if(num == nums[i]):
        print("\n element found at position",i+1)
        flag1=0
if flag1==1:
    print("\n element not found")
print(type(nums))
