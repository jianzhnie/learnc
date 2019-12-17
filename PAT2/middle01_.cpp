//这么简单的题目搞了几个小时，用纯C分分钟
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Node
{
    int x;
    int y;
    int num;
}Peanut;
int cmp(const void *a, const void *b);

int cmp(const void *a, const void *b)
{
    Peanut *A = (Peanut*)a;
    Peanut *B = (Peanut*)b;
    return B->num - A->num;
}


int main() 
{
    Peanut P[500];
    int M, N, K;
    int i, j, k;
    int value;
    while(~scanf("%d %d %d", &M, &N, &K))
    {
        k=0;         
        for(i=0;i<M;i++){
            for(j=0;j<N;j++){
                scanf("%d", &value);                 
                if(value!=0){
                    P[k].num=value;
                    P[k].x=i;                     
                    P[k].y=j;                     
                    k++;                 
                }
            }         
        }         
        int lenP = k;         
        int s0, s1;         
        qsort(P, lenP, sizeof(Peanut), cmp);        
        Peanut O = {-1, P[0].y, 0};
        for(i=0;i<lenP;i++){                
            s0 = abs(P[i].x-O.x)+abs(P[i].y-O.y) +1;              
            s1 = P[i].x+1;             
            if(s0+s1<=K) { 
                O.num += P[i].num;                 
                O.x = P[i].x;                 
                O.y = P[i].y;                 
                K -= s0;}             
            else{                 
                break;
                }         
        }         
        printf("%d\n", O.num);     }
    return 0;
}
