class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n = asteroids.size();
        if (n == 0) return ans;

        ans.push_back(asteroids[0]);

        for (int i = 1; i < n; i++) {
            if (!ans.empty() && ((ans.back() > 0 && asteroids[i] > 0) || (ans.back() < 0 && asteroids[i] < 0))) {
                ans.push_back(asteroids[i]);
            } 
           
            else if (!ans.empty() && ans.back() > 0 && asteroids[i] < 0) {
                if (abs(asteroids[i]) > abs(ans.back())) {
                    ans.pop_back();
                    i--; 
                } 
                else if (abs(asteroids[i]) == abs(ans.back())) {
                    ans.pop_back(); 
                    
                }
                
            } 
            else {
                
                ans.push_back(asteroids[i]);
            }
        }

        return ans;
    }
};
