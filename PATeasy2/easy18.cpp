#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    //因为C++中，cin和cout要与stdio同步，中间会有一个缓冲，
    //所以导致cin，cout语句输入输出缓慢，这时就可以用这个语句，
    //取消cin，cout与stdio的同步，说白了就是提速，效率基本与scanf和printf一致。
    //然后就可放心的使用cin，cout了。
    int N; cin >> N;
    string name, str;
    string minStr="zzzzz", minName="";
    string maxStr="", maxName="";
    string start = "1814/09/06";
    string end = "2014/09/06";
    int counts = 0;
    for(int i=0; i<N; i++) {
        cin >> name >> str;
        if(str>=start && str<=end) {
            counts++;
            if(minStr > str) {
                minStr = str;
                minName = name;
            }
            if(maxStr < str) {
                maxStr = str;
                maxName = name;
            }
        }
    }
    cout << counts << " " << minName << " " << maxName << endl;
    return 0;
}