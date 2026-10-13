class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max=nums[0];
        int max_index = 0;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
                max_index=i;
                
            }
        }
        return max_index;
    }
};