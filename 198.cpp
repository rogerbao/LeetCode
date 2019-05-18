class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int money[2] = {nums[0], max(nums[0], nums[1])};
        if(nums.size()==2) return money[1];
        for(int i = 2; i<nums.size(); i++)
        {
            int tmp = money[1];
            money[1] = max(money[1], money[0]+nums[i]);
            money[0] = tmp;
        }
        return money[1];
    }
};