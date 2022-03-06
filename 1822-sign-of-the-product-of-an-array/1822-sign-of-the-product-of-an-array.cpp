class Solution {
public:
    int arraySign(vector<int>& nums) {
         int flag = 1;
        for (int n : nums) {
            if (n == 0) {
                return 0;
            }

            if (n > 0) {
                flag *= 1;
            } else {
                flag *= -1;
            }
        }

        return flag;
    }
};