/*
思路梳理：
一、找到第一个最大数
二、判断能不能回去，计算一下时间：x+y+1并判断2(x+y+1)是不是要小于k
三、记录总数Sum=sum+花生的数
四、将a[i][j]=0;
五、记录当前位置：nowx,nowy
六、到下一个位置(x,y)， 距离为abs(nowx-x)+abs(nowy-y)
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
struct Peanut
{
    int x, y, amount;
    Peanut(int _x, int _y, int _amount) {
        x = _x; y = _y; amount = _amount;
    }
    bool operator<(const Peanut& that) const {
        return (amount>that.amount);
    }
};

int main()
{
    // 输入
    int M, N, K;
    int tempAmount, tempX, tempY, dist, rlt;
    while(~scanf("%d %d %d", &M, &N, &K)) {
        vector<Peanut> peanut;
        for(int i=1; i<=M; i++) {
            for(int j=1; j<=N; j++) {
                scanf("%d", &tempAmount);
                if(tempAmount) {
                    peanut.push_back(Peanut(i, j, tempAmount));
                }
            }
        }
        sort(peanut.begin(), peanut.end());
 
        // 计算
        rlt = 0;
        if(peanut.size()) {
            tempY = peanut[0].y; tempX = 0;
            for(int i=0; i<peanut.size(); i++) {
                dist = abs(tempX-peanut[i].x) + abs(tempY-peanut[i].y)+1;
                if(K >= dist + peanut[i].x) {
                    K -= dist;
                    tempX = peanut[i].x;
                    tempY = peanut[i].y;
                    rlt += peanut[i].amount;
                } else {
                    break;
                }
            }
        }
        // 输出
        printf("%d\n", rlt);
    }
    return 0;
}