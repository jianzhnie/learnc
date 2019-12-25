#include <iostream>
using namespace std;

int main() {
    int n1, n2, exp, cnt = 0;
    scanf("%d", &n1);
    double coe, arr1[1001] = {0.0}, arr2[1001] = {0.0};
    double ans[2001] = {0.0};
    for(int i = 0; i < n1; i++) {
        scanf("%d %lf", &exp, &coe);
        arr1[exp] = coe;
    }
    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d %lf", &exp, &coe);
        arr2[exp] = coe;
    }
    for (int i=0; i<1001; i++){
        for(int j = 0; j < 1001; j++){
            ans[i + j] += arr1[i] * arr2[j];
        }
    }
    for(int i = 2000; i >= 0; i--)
        if(ans[i] != 0.0) cnt++;
    printf("%d", cnt);
    for(int i = 2000; i >= 0; i--)
        if(ans[i] != 0.0)
            printf(" %d %.1f", i, ans[i]);
    return 0;
}