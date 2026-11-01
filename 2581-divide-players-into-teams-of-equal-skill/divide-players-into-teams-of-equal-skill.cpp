class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int sum=0;
        for(int i=0; i<skill.size(); i++) sum+=skill[i];
        sum=sum*2/skill.size();
        sort(skill.begin(),skill.end());
        int i=0, j=skill.size()-1;
        long long value=0;
        while(i<j){
            if(skill[i]+skill[j]!=sum) return -1;
            else{
                value+=skill[i]*skill[j];
                i++;j--;
            }
        }
        return value;

    }
};