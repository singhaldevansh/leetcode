class Solution {
public:
    bool isPowerOfThree(int n) {
        double t=n;
        while(t>1){
            t/=3.0;
        }
        if(t==1) return true;
        return false;
    }
};