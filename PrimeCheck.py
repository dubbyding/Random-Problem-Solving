import time
def checkPrime(a):
    if a == '2' or a == '5':
        return True
    elif a[-1] in ('1', '3', '7') and (( int(a) * int(a) ) - 1 ) % 24 == 0: 
        return(loopcheck(int(a)))
    else:
        return False
def loopcheck(a):
    for i in range(2, int(a/2) + 1):
        if a % i == 0:
            return False
    return True
a = input("Enter Any Number:- ")
tic = time.time()
print("Prime") if checkPrime(a) else print("Not Prime")
toc = time.time()
print(toc-tic)