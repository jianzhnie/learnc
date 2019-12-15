import math

sample=[int(n) for n in input().split()]
n=sample[0]
num=sample[1:]

"""
A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。*/
"""

A1 = A2 = A3 = A4 = A5 = 0
flag =1
cnt=0
for i in range(len(num)):
    x = int(num[i])
    d = x%5
    if x%10==0:
        A1 +=x
    if d==1:
        A2 +=flag * x
        flag =-flag
    if d==2:
        A3 +=1
    if d==3:
        A4 +=x
        cnt+=1
    if d==4 and x>A5:
        A5=x
if cnt>0:
    A4 = round(float(A4)/cnt,1)

res = [A1, A2, A3, A4, A5]
for i in range(5):
    if res[i]!=0:
        continue
    else:
        res[i]='N'

for x in res[:4]:
    print(x,end =" ")
print(res[4])