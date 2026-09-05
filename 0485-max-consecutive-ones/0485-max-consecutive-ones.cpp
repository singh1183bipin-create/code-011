class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=i;
        int count =0;
        int res=0;

        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                count++;
                res=max(res,count);
                i++;
            }
            else
            {
                i=j+1;
                j=i;
                count=0;
            }
        }
        return res;
    }
};