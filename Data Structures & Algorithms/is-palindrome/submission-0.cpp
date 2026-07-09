class Solution {
public:
    bool isPalindrome(string s) {
			//your code goes here
	
        string str="";
        for(char ch:s)
        {
            if(isalnum(ch)) //numeric and character
            {
                str+=tolower(ch);
            }
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        
        return rev==str;
        
    }
};
