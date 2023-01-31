class Solution {
public:
    // std::vector<vector<int>> dp =std::vector<vector<int>> (201,vector<int>(10001,-1));
    // bool subsetsum (vector<int> &nums,int sum,int i=0)
    // {
    //     if(sum==0) return true;
    //     if(i>=size(nums)|| sum<0) return false;
    //     if(dp[i][sum]!=-1)return dp[i][sum];
    //     return dp[i][sum]=subsetsum(nums,sum-nums[i],i+1)|| subsetsum(nums,sum,i+1);
    // }
    bool canPartition(vector<int>& nums) {
       int totalsum=accumulate(begin(nums),end(nums),0),halfsum=totalsum/2;
       if(totalsum&1)return false;
       vector<bool>dp(halfsum+1,false);
       dp[0]=true;
       for(int num:nums){
           for(int j=halfsum;j>=num;j--){
               if(dp[j-num]){
                   dp[j]=true;
               }
           }
       }
       return dp[halfsum];
    }
};
