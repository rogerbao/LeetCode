class Solution {
public:
    int climbStairs(int n) {
        if(n<3) return n;
        int a[2] = {1, 2};
        for(int i = 3; i<=n; i++)
        {
            a[1] = a[0] + a[1];
            a[0] = a[1] - a[0];
        }
        return a[1];        
    }
};