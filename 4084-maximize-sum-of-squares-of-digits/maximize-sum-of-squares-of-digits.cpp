class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        if(num*9<sum) return "";
        while(sum>9){
            s+='9';
            sum-=9;
            num--;
        }
        if(sum>0){
            s+=sum+'0';
            num--;
        }
        while(num>0){
            s+='0';
            num--;
        }
        return s;
    }
};