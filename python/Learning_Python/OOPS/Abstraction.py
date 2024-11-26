class car:
    def __init__(self):
        self.acc=False
        self.brk=False
        self.clutch=False

    def start(self):
        self.brk=True
        self.acc=True
        print("\n Your car is started...")

xyz=car()
xyz.start()