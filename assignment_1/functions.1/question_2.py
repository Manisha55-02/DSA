def isValidTriangle(a,b,c):
    if(a+b<=c and b+c<=a and a+c<=b):return False
    elif(a<=0 or b<=0 or c<=0):return False
    else: return True
    
print(isValidTriangle(1,2,3))
print(isValidTriangle(0,1,2))
print(isValidTriangle(1,0.5,3))