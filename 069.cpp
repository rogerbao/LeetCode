class Solution {
public:
    int mySqrt(int x) {
        if (x <=0 ) return 0;
        int e = x/2 + 1;
        int s = 0;
        int mid;
        while(s < e)
        {   
            mid = s+(e-s)/2;
            long long sq = (long long)mid*(long long)mid;
            if(sq > x) e = mid - 1;
            else if(sq < x) s = mid + 1;
            else return mid;
        }
        return s;
    }
    int mySqrt1(int x) {
        if(x ==0) return 0;
        int l =1, u =x;
        while(true){
            int mid = l+(u -l)/2;
            if(mid > x/mid) u = mid-1;
            else if(mid+1 > x/(mid+1)) return mid;
            else  l =mid+1;
        }
    }
};