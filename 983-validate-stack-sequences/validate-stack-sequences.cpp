class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n1=pushed.size();
        int n2=popped.size();
        int j=0;
        int k=-1;
        vector<int>v;
        for(int i=0; i<n1; i++){
            v.push_back(pushed[i]);
            k++;
            while(!v.empty() && j<n2 && v[k]==popped[j]){
                v.pop_back();
                j++;
                k--;
            }
        }
        if(k==-1) return true;
        return false;
    }
};