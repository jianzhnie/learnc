strN = str(input())
strdict ={}
for s in strN:
    if s not in strdict:
        strdict[s]=1
    else:
        strdict[s]+=1
for key in sorted(strdict.keys()):
    print(str(key)+":"+str(strdict[key]))
