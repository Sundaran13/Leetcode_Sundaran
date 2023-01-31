class Solution {
public:
    int8_t dp[201][10001]={[0 ... 200]={[0 ... 10000]=-1}};
    bool subsetsum (vector<int> &nums,int sum,int i=0)
    {
        if(sum==0) return true;
        if(i>=size(nums)|| sum<0) return false;
        if(dp[i][sum]!=-1)return dp[i][sum];
        return dp[i][sum]=subsetsum(nums,sum-nums[i],i+1)|| subsetsum(nums,sum,i+1);
    }
    bool canPartition(vector<int>& nums) {
       int sum1=0;
      // vector<vector<int>> dp(201,vector<int> (1001,-1));
       for(int i=0;i<nums.size();i++){
           sum1+=nums[i];
       }
       if(sum1%2!=0){
           return false;
       }
       else{
           return subsetsum(nums,sum1/2);
       }
    }
};
