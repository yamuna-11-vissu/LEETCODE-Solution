
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) {
            return 0;
        }

        if(n == 1) {
            return nums[0];
        }

        vector<int> rob_money(n, 0);

        rob_money[0] = nums[0];
        rob_money[1] = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++) {
            rob_money[i] = max(rob_money[i-1],
                               nums[i] + rob_money[i-2]);
        }

        return rob_money[n-1];
    }
};
