class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> main;
        int ans=0;
        int n=gain.size();
        main.push_back(0);
        
        for(int i=0;i<n;i++){
            main.push_back(main.back()+gain[i]);
        
    }
    for(auto s:main){
        ans=max(s,ans);
    }
        return ans;
    }
};