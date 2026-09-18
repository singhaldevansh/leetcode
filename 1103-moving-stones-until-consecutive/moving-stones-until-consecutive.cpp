class Solution{
public:
    vector<int>numMovesStones(int a,int b,int c){
        vector<int>v={a,b,c};
        sort(v.begin(),v.end());
        int x=v[0],y=v[1],z=v[2];
        int mn,mx;
        if(y-x==1&&z-y==1)
            mn=0;
        else if(y-x<=2||z-y<=2)
            mn=1;
        else
            mn=2;
        mx=(y-x-1)+(z-y-1);
        return{mn,mx};
    }
};