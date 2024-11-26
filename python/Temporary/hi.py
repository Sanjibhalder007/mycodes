
def temp1(x,y):
    z=x+y
    result=[]
    i=0
    while i<z:
        k=temp2(i)
        result.append(k)
        i +=1
    return result

    

def temp2(s):
        t=(2*s*s)+(3*s)
        return t
    
m=temp1(4,5)
print(m)
