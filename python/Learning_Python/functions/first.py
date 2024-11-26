def sum(a,b):
    return a+b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b
def sub(a,b):
    return a-b

sum=sum(6,4)
print(sum)
mul=mul(6,4)
print(mul)
div=div(6,4)
print(div)
sub=sub(6,4)
print(sub)


def print_hello():
    print("hello")

output=print_hello()
print(output)

#default parameter 

def prod(a=1,b=1):
    print(a*b)

prod(2,3)
prod()

list=["kolkata","delhi","mumbai","agra"]

def print_list(sanjib):
    for i in sanjib:
        print(i,end=" ")

print_list(list)

#usd to inr convert

def convert(usd):
    inr=usd*83
    print("\n",usd,"USD=",inr,"INR")

convert(67)

#recursion

def show(num):
    if num>=0:
        print(num)
        show(num-1)

show(7)