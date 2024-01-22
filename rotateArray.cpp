class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        int i=0;
        for(i=0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums=temp;
    }
};