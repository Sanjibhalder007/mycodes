class student:
    name="sanjib"

s1=student()
print(type(s1))
print(s1)
print(s1.name) 

##constructor
print("constructor")

class student:
    def __init__(self,fullname):
        self.name=fullname


s1=student("ronny")
print(type(s1))
print(s1)
print(s1.name) 

class student:
    def __init__(self,fullname):
        self.name=fullname
    def wellcome(self):
        print("wellcome student",self.name) #method

s3=student("sanjib")
s3.wellcome()



