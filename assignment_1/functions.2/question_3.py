def arb_base2deci(base,num):
    sum=0
    for i in range(0,num):
        rem=num%10
        sum=sum+rem*pow(base,i)
        num=num//10
    return sum

def deci2arb_base(num,base):
    
print(deci2arb_base(12,2))    
