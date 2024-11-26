class student:
    def __init__(self,name,marks1,marks2,marks3) -> None:
        self.fullname=name
        self.amarks=marks1
        self.bmarks=marks2
        self.cmarks=marks3
    

        
    def avarage(self):
        print("\n Avarage=",(self.amarks+self.bmarks+self.cmarks)/3)

stu1=student("sanjib",98,99,97)
stu2=student("ronny",94,69,87)
print("\n your name=",stu1.fullname)
stu1.avarage()
print("\n your name=",stu2.fullname)
stu2.avarage()


