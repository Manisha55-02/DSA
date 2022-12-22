def isPrime(num):
    for x in range(2,num):
        if(num%x==0):
            return False
            break
    else :return True
    

def nextPrime(num):
    while(True):
        num+=1
        if(isPrime(num)):
            return num


num=int(input())
print(nextPrime(num))

    
    
