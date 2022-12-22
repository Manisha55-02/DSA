def reverseWords(str):
    n=len(str)
    tmp=" "
    res=" "
    for i in range(0,n):
        if(str[i]==" " or str[i]=="\t"):
            res=tmp+" "+res
        else:
            tmp+=str[i]
            res=tmp+" "+res
                    
    return res
        
        

print(reverseWords("INDIA IS BEST"))
    