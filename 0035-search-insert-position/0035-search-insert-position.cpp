class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        // If target is greater than the last element, insert at the end
        if (target > nums[n - 1]) return n;

        // Check where the target fits between two numbers
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] < target && target <= nums[i]) {
                return i;
            }
        }

        // If target is less than or equal to the first element
        return 0;
    }
};
