class bank:
    def __init__(self,bal,acc):
        self.bal=bal
        self.acc=acc

    def debit(self,ammount):
        self.bal -=ammount
        print("Rs.",ammount,"was debited...")
        print("total balance =",self.get_balance())
    
    def credit(self,ammount):
        self.bal +=ammount
        print("Rs.",ammount,"was credited...")
        print("total balance =",self.get_balance())
    def get_balance(self):
        return self.bal

usr=bank(12000,34546547)
usr.credit(2000)
usr.debit(5000)
