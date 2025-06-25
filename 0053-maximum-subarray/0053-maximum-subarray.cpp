class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int first = nums[0];
        int total = 0;
        for(int i=0;i<nums.size();i++){
            total=max(nums[i],total+nums[i]);
            first=max(total,first);                 
    }
    return first;
}};