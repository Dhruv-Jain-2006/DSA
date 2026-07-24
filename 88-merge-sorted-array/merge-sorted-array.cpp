class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        // Fill backwards comparing element wise A and B arrays

        int k = m+n-1;
        int i = m-1, j = n-1;

        while (i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[k--] = A[i--];
            } else {
                A[k--] = B[j--];
            }
        }

        while( j >= 0) {
            A[k--] = B[j--];
        }
    }
};