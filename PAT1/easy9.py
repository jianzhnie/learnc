s=input()
s+='0'*(4-len(s))
while True:
    b=''.join(sorted(list(s)))
    a=b[::-1]
    s=str(int(a)-int(b)) if int(a)-int(b) else None
    print("{} - {} = {}".format(a,b,s or '0000'))
    if s=='6174' or not s:
        break