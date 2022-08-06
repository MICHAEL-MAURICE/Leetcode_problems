class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int x : nums)
            v.push_back(to_string(x));
        sort(v.begin(), v.end(), [](string& a, string& b){
            return a + b > b + a;
        });
        if(v[0][0] == '0')
            return "0";
        string ans = "";
        for(string n : v)
            ans += n;
        return ans;
    }
};