class Solution {
public:
    double average(vector<int>& salary) {
       
        int total = 0;
        int mi = INT_MAX, ma = INT_MIN;
        
        cout<<mi<<"   "<<ma;
        for (const auto& s : salary) {
            total += s;
            mi = min(mi, s), ma = max(ma, s);
        }
        return double(total - mi - ma) / (salary.size() - 2);
    }
};