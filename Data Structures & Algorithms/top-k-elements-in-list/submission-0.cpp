class Solution 
{
public:
     vector<int> topKFrequent(vector<int>& nums, int k) 
     {
        //k =2 means pick the top 2 numbers whose frequency is the highest 
            // Your code goes here
            unordered_map<int,int>freq;
            vector<pair<int,int>> vec;

            //count freq
            for(int i:nums)
            {
                freq[i]++;
            }

            //store the {frequency, number}
            for(auto item:freq)
            {
                vec.push_back({item.second,item.first});
            }

            // Sort by frequency (highest first)
            sort(vec.rbegin(), vec.rend());
            vector <int> ans;
            for(int i=0;i<k;i++)
            {
                vector<int> temp;
                ans.push_back(vec[i].second);        
            }
            return ans;      
    }

};
//sort(vec.begin(), vec.end()); → Ascending order (lowest frequency first).
//sort(vec.rbegin(), vec.rend()); → Descending order (highest frequency first).