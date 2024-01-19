class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i=0, j=0;
        for(j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};