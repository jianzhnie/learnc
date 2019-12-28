#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	vector <int> vec;
	while(a != 0) {
		vec.push_back(a % b);
		a = a / b;
	}
	int flag = 0;
    int len = vec.size();
	for(int i = 0; i < len/2; i++) {
		if(vec[i] != vec[len-i-1]) {
			printf("No\n");
			flag = 1;
			break;
		}
	}
    // begin 指向的是 1 那個位置
    // end 指向的是 5 後面沒有東西的那個位置
    // vector<int>::iterator begin = vec.begin();
    // vector<int>::iterator end = vec.end();
    // vector<int>::iterator it;
    // if(!flag) printf("Yes\n");
    // for(it=end ; it!=begin ; it--){
    //     cout << *it<<" ";
    // }

    if(!flag) printf("Yes\n");
	for(int i = len - 1; i >= 0; i--) {
		printf("%d", vec[i]);
		if(i != 0) printf(" ");
	}
    if (len==0) printf("0");
	return 0;
}