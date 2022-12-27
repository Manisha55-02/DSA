
def reverseWords1(str):
    
    str=str.split(" ")
    res=""
    for i in str[::-1]:
        res +=i+" "
    return res
print(reverseWords1("INDIA IS COUNTRY"))

def reverseWords2(S):
    s=S.split(' ')
    s.reverse()
    return ' '.join(s)
print(reverseWords2("INDIA IS COUNTRY"))

def reverseWords3(S):
        
    return ' '.join(S.split(' ')[::-1])
print(reverseWords3("INDIA IS COUNTRY"))

def reverseWords4(str):
    n=len(str)
    tmp=" "
    res=" "
    for  i in   range(0,n):
        if(str[i]==" " or str[i]=="/t"):
            res+=tmp+" "
        else:
            tmp+=str[i]
            
    return res
print(reverseWords4("INDIA IS COUNTRY"))        
    




    
    