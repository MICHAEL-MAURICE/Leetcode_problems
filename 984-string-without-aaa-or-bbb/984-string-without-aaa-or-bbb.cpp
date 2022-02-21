class Solution {
public:
    string strWithout3a3b(int A, int B) {
         string ret;
        char a = 'a';
        char b = 'b';
        if(A < B) swap(A,B),swap(a,b);
        while(A > 0 || B > 0){
            if(A > 0) ret += a,--A;
            if(A > B) ret += a,--A;
            if(B > 0) ret += b,--B;
            if(B > A) ret += b,--B;
        }
        return ret;
    }
};