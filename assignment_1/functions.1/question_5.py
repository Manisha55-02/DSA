
def checkPassword(str):
    L,U,D=0,0,0
    if(len(str)>=8):
        for char in str:
            if(char.isupper()): U+=1
            if(char.islower()): L+=1
            if(char.isdigit()): D+=1
    if(L>=1 and D>=1 and U>=1 and  L+U+D==len(str)):
        return True
    else : return False
    
str=str(input())
print(checkPassword(str))    
                 