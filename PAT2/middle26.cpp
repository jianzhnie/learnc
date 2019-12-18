#include <stdio.h>


int main(){
    int a,b,n;  //模拟竖式除法
    int temp=0;
    while(scanf("%d %d %d",&a,&b,&n)!=EOF){
    printf("0.");   //默认a<b
        while(n--){
       a=a*10;     //借位
      temp=a/b;   //求值
       a=a%b;        //求余数
        printf("%d",temp);
        }
        printf("\n");
    }
    return 0;
}
