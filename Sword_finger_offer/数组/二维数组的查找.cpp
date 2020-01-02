//在一个二维数组中（每个一维数组的长度相同），
//每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

class Solution {
public:
    bool Find(int target, vector<vector<int>> array) {
        int n=array.size();
        int m=array[0].size();
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if(array[i][j]==target){
                    return true;
                    break;
                }
            }
        }
        return false;
    }
};

