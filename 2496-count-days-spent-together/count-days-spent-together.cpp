class Solution {
public:
    int convert(string s, vector<int>&data){
        int month=stoi(s.substr(0,2));
        int day=stoi(s.substr(3));
        int count=0;
        for(int i=0; i<month-1; i++){
            count+=data[i];
        }
        count+=day;
        return count;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> data={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int a=convert(arriveAlice,data);
        int b=convert(leaveAlice,data);
        int c=convert(arriveBob,data);
        int d=convert(leaveBob,data);
        int start=max(a,c);
        int end=min(b,d);
        return max(0,end-start+1);
    }
};