class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int i=s.size()-2;
        while(i>=0 && s[i]>=s[i+1]) i--;
        if(i==-1) return -1;
        int j=s.size()-1;
        while(s[j]<=s[i]) j--;
        swap(s[j],s[i]);
        reverse(s.begin()+i+1,s.end());
        long long value= stoll(s);
        if(value>INT_MAX) return -1;
        return value;
    }
};