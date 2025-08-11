class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        vector<int> idx;

       
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            for (char v : vowels) {
                if (c == v) {
                    idx.push_back(i);
                    break;
                }
            }
        }

        
        int l = 0, r = idx.size() - 1;
        while (l < r) {
            swap(s[idx[l]], s[idx[r]]);
            l++;
            r--;
        }

        return s;
    }
};
