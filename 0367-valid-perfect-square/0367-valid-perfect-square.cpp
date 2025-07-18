class Solution {
public:
    bool isPerfectSquare(long int num) {
        bool ans = true;
        if(num==1){
            return true;
        }
          for(long int i=0;i<num;i++){
            if(i*i==num){
                ans = true;
                break;
            }
            else{
                ans=false;
            }
          }
          return ans;
    }
};