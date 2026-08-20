class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int v1,v2;
        int bestend=nums[0];
        int ans=nums[0];


        for(int i=1;i<n;i++)
        {
            v1=bestend+nums[i];
            v2=nums[i];
            bestend=max(v1,v2);
            ans=max(ans,bestend);
        }
        return ans;
     
    }
};