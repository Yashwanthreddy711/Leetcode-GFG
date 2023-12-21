class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        vector<int>h;
        vector<int>v;
        for(auto it:hBars){
            h.push_back(it);
        }
        for(auto it:vBars){
            v.push_back(it);
        }
        int cnt=1;
        int mv=1;
        int mh=1;
        for(int i=1;i<h.size();i++){
           if(h[i]==h[i-1]+1){
               cnt++;  
           }
           else{
             cnt=1;
           }
           mh=max(mh,cnt);
        }
        cnt=1;
        for(int i=1;i<v.size();i++){
           if(v[i]==v[i-1]+1){
               cnt++;
               
           }
           else{
             cnt=1;
           }
           mv=max(mv,cnt);
        }
        int x= min(mv+1,mh+1);
        return x*x;
    }

};
/*
1 2 3    1 2 3 4 

1 2 3    1  2 

1 2  1 2 

*/