// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        int mid = low + (high - low)/2;
        while(low < high)
        {
            if(!isBadVersion(mid))
            {
                low = mid + 1;
                mid = mid + (n - mid)/2;
            }       
            else
            {
                high = mid;
                mid = low + (mid - low)/2;
            }
        }
        return high;

    }
};