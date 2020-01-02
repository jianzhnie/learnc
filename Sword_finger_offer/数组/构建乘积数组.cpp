# include <vector>
# include <iostream>

// 题目描述
// 给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],
// 其中B中的元素B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法。

class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        int length = A.size();
        vector<int> B(length);
        if(length != 0 ){
            B[0] = 1;
            //计算下三角连乘
            for(int i = 1; i < length; i++){
                B[i] = B[i-1] * A[i-1];
            }
            int temp = 1;
            //计算上三角
            for(int j = length-1; j >= 0; j--){
                B[j] *= temp;
                temp *= A[j];
            }
        }
        return B;
    }
};