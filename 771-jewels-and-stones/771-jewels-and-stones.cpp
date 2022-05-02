class Solution {
public:
    int numJewelsInStones(string J, string S) {
   bool isJewel[500] = {false, };
        int jewelCount = 0;
        for (int i = 0; i < J.length(); i++) {
           isJewel[J[i]] = true;
        }
        for (int i = 0; i < S.length(); i++) {
            jewelCount += int(isJewel[S[i]]);
        }
        return jewelCount;
    }
};