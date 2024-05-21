class wymierna:
    def __init__(self, licz, mian):
        self.licz = licz
        self.mian = mian
        
def NWD(a,b):
    while b:
        t = b
        b = a % b
        a = t
    return a

def dodaj()