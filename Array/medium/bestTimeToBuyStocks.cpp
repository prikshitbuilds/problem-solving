class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n =nums.size();
        int mini =nums[0];
        int maxProfit = 0;
        for(int i=1;i<n;i++){
             int cost = nums[i]-mini;
             maxProfit = max(cost,maxProfit);
             mini = min(mini,nums[i]);
        }
        return maxProfit;
    }
};
