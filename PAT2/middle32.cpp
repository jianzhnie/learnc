//约瑟夫问题  顺序表最典型的应用 
#include<stdio.h>

int main(){
    int n, m;
    while(scanf("%d %d",&n,&m) != EOF){
        int  r=0 , i ;
        for(i = 2; i <= n; i++)
            r = (r + m) % i;  //能用数学解决的就不要用算法 
        printf("%d\n", r + 1);
        }
    return 0;
} 