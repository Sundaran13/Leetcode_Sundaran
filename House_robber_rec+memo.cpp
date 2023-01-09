class Solution {
public:
    int ans(vector<int> &nums,int i,vector<int> &dp){
        if(i<0){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=max(ans(nums,i-2,dp)+nums[i],ans(nums,i-1,dp));
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1);
        fill(dp.begin(),dp.end(),-1);
        return ans(nums,nums.size()-1,dp);
    }
};
