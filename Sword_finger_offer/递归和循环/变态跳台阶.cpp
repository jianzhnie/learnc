class Solution {
public:
    int jumpFloorII(int target) {
        if (target <= 0) {
            return -1;
        } else if (target == 1) {
            return 1;
        } else {
            return 2 * jumpFloorII(target - 1);
        }
    }
};


class Solution {
public:
    int jumpFloorII(int number) {
        int f=1,fn=1;
        for(int i=2;i<=number;i++){
            fn=2*f;
            f=fn;
        }
        return fn;
    }
};