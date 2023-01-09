class Solution {
public:
    int ans(vector<int> &nums,int i){
        if(i<0){
            return 0;
        }
        return max(ans(nums,i-2)+nums[i],ans(nums,i-1));
    }
    int rob(vector<int>& nums) {

        return ans(nums,nums.size()-1);
    }
};
