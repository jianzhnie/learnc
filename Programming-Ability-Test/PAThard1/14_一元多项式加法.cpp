# include<iostream>
# include <stdio.h>
using namespace std;

int main(){
    double ans[1010] = { 0 };
    int a, exp;
    double coe;
    scanf("%d", &a);
    for(int i = 0;i < a;i++){
        scanf("%d %lf", &exp, &coe);
        ans[exp] += coe;
    }
    scanf("%d", &a);
    for(int i = 0;i < a;i++){
        scanf("%d %lf", &exp, &coe);
        ans[exp] += coe;
    }
    int count = 0;
    for(int i = 0;i <= 1000;i++){
        if(ans[i] != 0)
        count++;
    }
    printf("%d", count);
    for(int i = 1000;i >= 0;i--)
    {
        if(ans[i] != 0){
            printf(" %d %.1f", i, ans[i]);
        }
    }
    return 0;
}