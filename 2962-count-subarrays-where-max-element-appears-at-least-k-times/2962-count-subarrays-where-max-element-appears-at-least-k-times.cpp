class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        int low=0;
        int high=0;
        long long  ans=0; 
        int count=0;

        while(high<n)
        {
            if(nums[high]==mx)
            {
                count++;
            }
            while(count>=k)
            {
                ans=ans+(n-high);
                low++;
                if(nums[low-1]==mx)
                count--;
            }
            high++;
        }
        return ans;
    }
};