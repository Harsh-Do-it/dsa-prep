class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxlen = 0;

        int n = nums.size();
        sort(nums.begin(),nums.end());

        int left = 0;

        for(int right=0; right<n; right++){
            while(nums[right]-nums[left]>1){
                left++;
            }
            
            if(nums[right]-nums[left]==1){
                maxlen = max(maxlen,right-left+1);
            }
        }
        return maxlen;
        
    }
};