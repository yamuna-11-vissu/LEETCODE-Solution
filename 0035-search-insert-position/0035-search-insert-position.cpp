class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool k = false;
        int ans ;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                k=true;
                ans=i;

            }
            
        }
        if(k == false){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target){
                    ans=i;
                    break;
                }
                else{
                    ans=nums.size();
                }
            }
        }
        return ans;
        
    }
};