int IsHuiWen(int n)
{
    int res=0;
    int flag =0;
    while (n){
        int s = n%10;
        n /=10;
        res = res*10 + s;
    }
    if (res==n){
        flag=1;
    }
    return flag;
}