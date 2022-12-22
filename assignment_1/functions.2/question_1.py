
def isperfect(num):
    sum=0
    for x in range(1,num):
        if(num%x==0):
         sum+=x
    if(sum==num):return True
    else : return False


for num in range(1,10001):
    if(isperfect(num)==True):
        print(num)


         
         

