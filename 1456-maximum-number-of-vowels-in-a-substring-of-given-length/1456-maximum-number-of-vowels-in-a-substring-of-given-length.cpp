class Solution {
public:
    int maxVowels(string s, int k) {


        int n=s.size();
      int low=0;
      int high=0;
      int maxv=INT_MIN;
      int count=0;
      
      for(high=0;high<n;high++)
      {
        if(s[high]=='a'||s[high]=='e'||s[high]=='o'||s[high]=='i'||s[high]=='u')
        {
            count++;
        }
        if((high-low+1)==k)
        {
            maxv=max(maxv,count);
            if(s[low]=='a'||s[low]=='e'||s[low]=='o'||s[low]=='i'||s[low]=='u')
            count--;
            low++;
        }
      }
      return maxv;
    }
};