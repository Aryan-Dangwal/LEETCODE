class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
       vector<int> distinct_num1,distinct_num2;
          for(int num :set1){
            if(set2.count(num)==0){
                distinct_num1.push_back(num);
            }

          }
          for(int num1 :set2){
            if(set1.count(num1)==0){
                distinct_num2.push_back(num1);

    }
          }
    return {distinct_num1,distinct_num2};
    }
};