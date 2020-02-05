class Solution {
public:
    int Fibonacci(int n) {
        if (n=1) return 1;
        if (n=2) return 1;
        if (n >2){
            return Fibonacci(n-1) + Fibonacci(n-2);
        }
    }
};


class Solution {
    public:
        int Fibonacci(int n) {
            int preNum=1;
            int prePreNum=0;
            int result=0;
            if(n==0) return 0;
            if(n==1)return 1;
            for(int i=2;i<=n;i++){
                result=preNum+prePreNum;
                prePreNum=preNum;
                preNum=result;
            }
            return result;
    }
};
