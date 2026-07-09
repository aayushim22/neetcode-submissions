class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map <char,int>m;
        unordered_map <char,int>n;
        if(s.size()!=t.size())
        return false;
        for(char ch:s)
        {
            m[ch]++;
        }
        for(char ch:t)
        {
            n[ch]++;
        }
        return m==n;
    }
};
