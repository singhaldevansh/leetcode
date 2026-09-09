class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        sort(houses.begin(),houses.end());
        int i=0;
        int maxi=0;
        for(int j=0; j<houses.size(); j++){
            while(i+1<heaters.size() && abs(heaters[i+1]-houses[j])<=abs(heaters[i]-houses[j])) i++;
            maxi=max(maxi,abs(heaters[i]-houses[j]));
        }
        return maxi;
    }
};