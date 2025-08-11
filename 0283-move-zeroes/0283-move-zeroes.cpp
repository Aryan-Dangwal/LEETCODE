class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
              for(int k=0;k<count;k++){
                ans.push_back(0);
              }
            
        nums=ans;
       
    }
};