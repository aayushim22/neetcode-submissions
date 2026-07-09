class Solution {
public:
    int binary_search(vector<int>& nums, int start,int end,int target) 
    {
       
        int mid=(start+end)/2;
            if(start>end)
            {
                return -1;
            }
            else if(nums[mid]==target)
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                return binary_search(nums,start,mid-1,target);
            }
             else if(target>mid)
            {
                return binary_search(nums,mid+1,end,target);
            }   
    }
    int search(vector<int>& nums,int target) 
    {
        return binary_search(nums,0,nums.size()-1,target);
    }
};
