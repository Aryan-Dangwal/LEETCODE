class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans;
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        int mindiff= abs(closest-target);
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                int sum=nums[i]+nums[j]+nums[k];
                        if(mindiff>=abs(target-sum)){
                            closest=sum;
                            mindiff= abs(target-sum);
                        }
                    }
                }
            }
            if(closest==target){
                return target;
            }
          else{ return closest;}
        }

    
};