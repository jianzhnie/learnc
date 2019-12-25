# include <iostream>
# include <stdio.h>
using namespace std;

int main(){
    char c[4] = {"WTL"};
    double betgame[3][3];
    double ans = 1.0;
    for (int i =0; i<3; i++){
        double maxvalue = 0.0;
        int maxindex = 0;
        for (int j = 0; j < 3; j++)
        {
            cin>>betgame[i][j];
            if (maxvalue <=betgame[i][j] ){
                maxvalue = betgame[i][j];
                maxindex = j;
            }
        } 
        ans *= maxvalue;
        printf("%c ", c[maxindex]);
    }
    printf("%.2f", (ans * 0.65 - 1) * 2);
    return 0;
}