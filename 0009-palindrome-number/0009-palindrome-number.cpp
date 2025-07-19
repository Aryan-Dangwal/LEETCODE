class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers can't be palindromes
        
        // Convert the integer to a vector of digits
        vector<int> b;
        int temp = x;
        while (temp > 0) {
            b.push_back(temp % 10);
            temp /= 10;
        }
        
        // Compare digits from both ends
        int n = b.size();
        for (int i = 0; i < n / 2; ++i) {
            if (b[i] != b[n - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};
