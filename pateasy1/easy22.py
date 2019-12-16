N = int(input())
dict1 ={}
for i in range(N):
    id, score = list(input().split())
    score = int(score)
    if id in dict1:
        dict1[id]+=score
    else:
        dict1[id]=score

mykey = max(dict1, key=dict1.get)

print(mykey, dict1[mykey])
