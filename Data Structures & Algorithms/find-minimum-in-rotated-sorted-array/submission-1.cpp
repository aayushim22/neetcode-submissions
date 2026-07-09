class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini=INT_MAX;
            for(int j=0;j<nums.size();j++)
            {
               mini=min(mini,nums[j]);
            }
        return mini;
        
    }
};
