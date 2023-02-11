class Solution {
public:
    // int mincost(vector<int> &cost,int n,vector<int>&dp){
    //     if(n<0)return 0;
    //     if(n==0 || n==1) return cost[n];
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }

    //     return dp[n]=cost[n]+min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        //vector<int> dp(n);
        int first=cost[0];
        int second=cost[1];
        if(n<=2){
            return min(first,second);
        }
        for(int i=2;i<n;i++){
            int curr=cost[i]+min(first,second);
            first=second;
            second=curr;
        }
        return min(first,second);
        // return min(mincost(cost,n-1,dp),mincost(cost,n-2,dp));
    }
};
