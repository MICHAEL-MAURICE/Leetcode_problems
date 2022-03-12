class Solution {
public:
    int largestPerimeterFromSorted(vector<int>& A){
        int cur = A.size();
        
        while(cur >= 3 && A[cur-3] + A[cur-2] <= A[cur-1]){
            cur--;
        }
        
        if(cur < 3){
            return 0;
        }
        
        return A[cur-3] + A[cur-2] + A[cur-1];
    }
    
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        return largestPerimeterFromSorted(A);
    }
};