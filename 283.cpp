class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int new_pos = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[new_pos++] = nums[i];
            }
        }
        for(int j = new_pos; j<nums.size(); j++)
        {
            nums[j] = 0;
        }
    }
};