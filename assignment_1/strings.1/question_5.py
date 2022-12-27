def  encrpytWithCaesar(str,shft):
    n=len(str)
    res=""
    for i in range(0,n):
        if chr(str[i])>= "a" and chr(str[i])<= "z":
            pos = str[i] - "a"
            pos = (pos +shft)%26
            res=chr("a")+pos
            return res
            
print(encrpytWithCaesar("abc",2))