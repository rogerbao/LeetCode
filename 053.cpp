class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int max_value = nums[0];
        int tmp = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(tmp<0) tmp = 0;
            tmp += nums[i];
            max_value = max(tmp, max_value);
        }
        return max_value;
    }
};