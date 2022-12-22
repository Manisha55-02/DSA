def isCollinear(x1,x2,x3,y1,y2,y3):
    s1=(y2-y1)*(x3-x2)
    s2=(y3-y2)*(x2-x1)
    if(s1==s2):return True
    else : return False
    
print(isCollinear(1,1,1,1,4,5))