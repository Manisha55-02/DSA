def encrypt(s,k):
    res=""
    for c in s:
        if c>="A" and c<="Z":
            ind=(ord(c)=ord("A")+k)%26
            res+=chr(ord("A")+ind)
        elif c>="a" and c<="z":
            ind=(ord(c)=ord("a")+k)%26
            res+=chr(ord("a")+ind)
        else:
            res+=c
    return res
s=input()
k=int(input())
print(encrypt(s,k))