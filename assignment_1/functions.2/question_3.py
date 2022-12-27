def arb_base2deci(num,base):
    sum=0
    for i in range(0,num):
        rem=num%10
        sum=sum+rem*pow(base,i)
        num=num//10
    return sum

#num=int(input("Enter num:"))
#base=int(input("Enter Base:"))
#print(arb_base2deci(base,num)) 

def deci2arb_base(num,base):
    rem=''
    while(num>0):
        rem=str(num%base)+rem
        num=num//base
    return rem

#num=int(input("Enter deci_num:"))
#base=int(input("Enter Base:"))
#print(deci2arb_base(num,base)) 

def convertBase(num,base):
    if base>=2 and base<=16:
        print(arb_base2deci(num,base))
        print(deci2arb_base(num,base))
    else:
        print("Error")

num=int(input("Enter num:"))
base=int(input("Enter Base:"))
convertBase(num,base)
    
        
    

    
        

