import random
def getCoinFlips():
    prev=-1
    ntosses=0
    while True:
        current=random.randint(0,1)
        print(current)
        ntosses+=1
        if((prev==1 and current==1) or (prev==0 and current==0)):
            return ntosses
        prev=current
        
print(getCoinFlips())
min=100000
max=0
sum=0
for i in range(10):
    res=getCoinFlips()
    if(res<min):
        min=res
    if(res>max):
        max=res
    sum+=res
print(min,max,sum/10.0)
    