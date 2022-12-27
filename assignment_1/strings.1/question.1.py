def removeMysteryLength(str):
    for i in range(1,len(str)):
        if(len(str)<=99):
            return str[0:len(str)-i-1]
        
print(removeMysteryLength("jamesBond00712"))