class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        unordered_set<int> freqSet;
        for (auto pair : mpp) {
        int freq = pair.second;
        if (freqSet.find(freq) != freqSet.end()) {
            return false; 
        }
        freqSet.insert(freq);
    }

    return true; 
}
};