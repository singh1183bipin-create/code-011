class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int rem;
        int res=0;
        unordered_map<int,int> mp;
        mp.insert({0,1});

        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            rem=sum%k;

            if(rem<0)
            {
                rem +=k;
            }

            if(mp.find(rem)!=mp.end())
            {
                res=res+mp[rem];
            }
            mp[rem]++;
        }
        return res;
    }
};