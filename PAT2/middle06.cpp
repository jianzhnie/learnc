#include<cstdio>
int main()
{
    int n,fib[10001],i,x;
    fib[0]=1;fib[1]=1;
    for(i=2;i<10001;i++) 
        fib[i]=(fib[i-1]%10000+fib[i-2]%10000)%10000;
    while(~scanf("%d",&n))
    {
      while(n--) 
        {
            scanf("%d",&x);
            printf("%04d",fib[x]);
        }
        printf("\n");
    }
    return 0;
}