class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        rotate2(nums, k);
    }
    void rotate2(vector<int>& nums, int k) {
        if (k<=0) return;
        if (nums.size()<=1) return;
        k %= nums.size();
        int currIdx=0, newIdx=k;
        int tmp1 = nums[currIdx], tmp2; 
        int origin = 0;
        
        for(int i=0; i<nums.size(); i++){
            tmp2 = nums[newIdx];
            nums[newIdx] = tmp1;
            tmp1 = tmp2; 

            currIdx = newIdx;
        
        //if we meet a circle, move the next one
            if (origin == currIdx) {
                origin = ++currIdx;
                if(currIdx>nums.size()-1){break;}
                tmp1 = nums[currIdx];
            }
            newIdx = (currIdx + k) % nums.size();
        }
    }
    
    
    void rotate1(vector<int>& nums, int k) {
        if (k<=0) return;
        if (nums.size()<=1) return;
        k %= nums.size();
        reverse(nums, 0, nums.size() - 1 - k);
        reverse(nums, nums.size() - k, nums.size() - 1);
        reverse(nums, 0, nums.size() - 1);
    }
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int tmp = nums[start];
            nums[start++] = nums[end];
            nums[end--] = tmp;
        }
    }
};