#include <stdio.h>
#include <stdlib.h>
int comp(const void *a,const void *b){
 return *(int*)a-*(int*)b;
}
int main(){
    int num,end,k;
    int r[4];
    int max,min;
    scanf("%d",&num);
    end=0,k=0;
    while(end!=6174&&num!=0){
        r[0]=num%10;
        r[1]=num/10%10;
        r[2]=num/100%10;
        r[3]=num/1000;
        qsort(r,4,sizeof(int),comp);
        max=1000*r[3]+100*r[2]+10*r[1]+r[0];
        min=1000*r[0]+100*r[1]+10*r[2]+r[3];
        end=max-min;
        printf("%04d - %04d = %04d\n",max,min,end);
        num=end;
        k++;
    }
    if(num==0&&k==0){
        printf("0000 - 0000 = 0000\n");
    }
    return 0;
}