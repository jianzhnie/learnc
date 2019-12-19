#include <stdio.h>

int main()
{
 
    int input;
    int a[60] = {0,1,2,3,4};
    int i;
    for(i = 5;i<56;i++){
        a[i] = a[i-1]+a[i-3];
    }
    while(scanf("%d",&input)!=EOF){
        printf("%d\n",a[input]);
    }
    return 0;
}