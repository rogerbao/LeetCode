class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int pos=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[pos])
            {
                pos+=1;nums[pos]=nums[i];
            }
        }
        return pos+1;
    }
};