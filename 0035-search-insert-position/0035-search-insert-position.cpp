class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        
        if (target > nums[n - 1]) return n;

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] < target && target <= nums[i]) {
                return i;
            }
        }

        // If target is less than or equal to the first element
        return 0;
    }
};
