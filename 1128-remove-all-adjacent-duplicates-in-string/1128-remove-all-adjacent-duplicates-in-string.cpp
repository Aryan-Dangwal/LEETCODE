class Solution {
public:
    string removeDuplicates(string s) {
         string a="" ;
         int i=0;
             while (i<s.length()){
                 if(a.empty() || s[i]!=a.back()){
                    a.push_back(s[i]);
                 }
                 else{
                    a.pop_back();
                 }
                 i++;
                }
                return a;
    }
};