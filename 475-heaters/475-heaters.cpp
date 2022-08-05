class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int lo = 0, hi = 1e9;
        while(lo < hi){
            int mid = lo + (hi - lo) / 2;
            if(valid(houses, heaters, mid))
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }
 
    bool valid(vector<int>& houses, vector<int>& heaters, int r){
        for(int h : houses){
            auto it = upper_bound(heaters.begin(), heaters.end(), h + r);
            if(it == heaters.begin() || abs(*(--it) - h) > r)
                return false;
        }
        return true;
    }
};