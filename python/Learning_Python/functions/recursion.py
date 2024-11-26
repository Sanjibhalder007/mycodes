def show(num):
    if num>=0:
        print(num)
        show(num-1)
    else:
        return   
    

show(9)