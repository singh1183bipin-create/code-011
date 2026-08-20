class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        int n=nums.size();
        int v1,v2,v3;
        int maxend=nums[0];
        int minend=nums[0];
        int ans=nums[0];
        

        for(int i=1;i<n;i++)
        {
            v1=nums[i];
            v2=maxend*nums[i];
            v3=minend*nums[i];
            maxend=max(v1,max(v2,v3));
            minend=min(v1,min(v2,v3));
            ans= max(ans,max(maxend,minend));
        }
        return ans;
        
    }
};