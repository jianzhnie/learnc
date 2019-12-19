# include <iostream>
# include <string>
using namespace std;


int main(void){
    int n;
    scanf("%d", &n);
    int b = n / 100;
    int s = n / 10 % 10;
    int g = n % 10;
    for(int i = 0; i < b;i++){
        printf("B");
    }
    for(int i = 0; i < s; i++){
        printf("S");
    }
    for(int i = 1; i <= g; i++){
        printf("%d", i);
    }
    return 0;
}