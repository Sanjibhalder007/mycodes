class Method:
    def __init__(self,fullname,hobby):
        self.nameof=fullname
        self.hobbyis=hobby
    def name(self):
        print("\n your name is:",self.nameof)
    def hobby(self):
        print("\n your hobby is:",self.hobbyis)

usr=Method("sanjib","football")  #method
usr.name()                          
usr.hobby()                         

usr2=Method("ronny","cricket")   #method
usr2.name()
usr2.hobby()