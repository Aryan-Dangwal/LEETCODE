class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prod(n);
        int prodc = 1;
        int zerocount = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                prodc *= nums[i];
            } else {
                zerocount++;
            }
        }

        if (zerocount > 1) {
            for (int i = 0; i < n; i++) {
                prod[i] = 0;
            }
        }
        else if (zerocount == 1) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    prod[i] = prodc;
                } else {
                    prod[i] = 0;
                }
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                prod[i] = prodc / nums[i];
            }
        }

        return prod;
    }
};
