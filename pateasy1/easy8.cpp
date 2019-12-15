/*大家应该都会玩“锤子剪刀布”的游戏：
现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。
*/
# include <iostream>
# include <cmath>
# define MAX(a,b) (((a)>(b)) ? (a) : (b))
using namespace std;

int main(){
    char A, B;
    int n;
    cin>>n;
    int winA_C=0;
    int winA_J=0;
    int winA_B=0;
    int winB_C=0;
    int winB_J=0;
    int winB_B=0;
    int draw = 0;
    for (int i=0; i<n; i++){
        cin>>A>>B;
        if (A == 'C'){
            if (B=='C') draw+=1;
            if (B=='J') winA_C+=1;
            if (B=='B') winB_B+=1;
            }
        if (A == 'J'){
            if (B=='C') winB_C+=1;
            if (B=='J') draw+=1;
            if (B=='B') winA_J+=1;
            }
        if (A == 'B'){
            if (B=='C') winA_B+=1;
            if (B=='J') winB_J+=1;
            if (B=='B') draw+=1;
            }
    }
    int winA = winA_C+winA_J+winA_B;
    int winB = winB_C+winB_J+winB_B;
    cout <<winA<<" "<< draw<<" "<<n-winA-draw<<endl;
    cout <<winB<<" "<< draw<<" "<<n-winB-draw<<endl;
    if(MAX(winA_C,MAX(winA_J,winA_B))==winA_B) cout<<"B ";
        else if(MAX(winA_C,MAX(winA_J,winA_B))==winA_C) cout<<"C ";
        else cout<<"J ";
    if(MAX(winB_C,MAX(winB_J,winB_B))==winB_B) cout<<"B"<<endl;
        else if(MAX(winB_C,MAX(winB_J,winB_B))==winB_B) cout<<"C"<<endl;
        else cout<<"J"<<endl;
    return 0;
}
