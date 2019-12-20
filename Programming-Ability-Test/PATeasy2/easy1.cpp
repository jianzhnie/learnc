#include <stdio.h>

int main(){
    int n;
    long int A,B,C;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld %lld",&A,&B,&C);
        printf("Case #%d: %s\n",i+1,(A+B)>C?"true":"false");
    }
    return 0;
}