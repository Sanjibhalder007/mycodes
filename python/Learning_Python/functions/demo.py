def calculate(n,b):
   
    for i in range(1,b):
        n=n*i
        b -=1
    return (n)
    
fact=calculate(5,5)
print(fact)
print(type(fact))
