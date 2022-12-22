def isPrime(num):
    for x in range(2,num):
        if(num%x==0):
            return False
            break
    else :return True
    
num=int(input())
print(isPrime(num))