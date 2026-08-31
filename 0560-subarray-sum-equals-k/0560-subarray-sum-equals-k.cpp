class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp.insert({0,1});
        int res=0;
        int currentsum=0;
        int sum;
        for(int i=0;i<nums.size();i++)
        {
            currentsum=currentsum+nums[i];
            sum=currentsum-k;
            if(mp.find(sum)!=mp.end())
            {
                res=res+mp[sum];
            }
            mp[currentsum]++;
        }
        return res;
    }
};