class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>seen;
      int l =0 , res = 0;
      for(int i=0;i<s.length();i++)
      {
        while(seen.find(s[i]) != seen.end())
        {
            seen.erase(s[l]);
            l++;
        }
        seen.insert(s[i]);
        res = max(res,i-l+1);
      }
      return res;
    }
};
