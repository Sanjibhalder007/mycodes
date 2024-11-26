areat=simpsoon2(7 , 0 , 7)
print(areat)

def simpsoon2(ul,ll,n):
    
    print(ul)
    even=0
    odd=0
    list=[]
    l=ul-ll
    i=0
    h=float(l/n)
    x=ll
    while x<=ul:
        fx=function(x)
        list.append(fx)
        x +=h
        i +=1
    
    i=1
    while i<n:
        if i%2 ==0:
            even +=list[i]
        else:
            odd +=list[i]
        
        i +=1
    
    area =(n/3)*[(list[0]+list[n])+4*even+2*odd]
    return area

def function(x):
    z=(3*x*x)+(2*x)+5
    return z

