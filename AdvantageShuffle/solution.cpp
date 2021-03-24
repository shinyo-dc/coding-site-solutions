class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<int> indexB (B.size(), 0);
        vector<int> ans (A.size(), 0);
        sort(A.begin(), A.end());
        for (int i = 0; i < B.size(); i++)
            indexB[i] = i;
        sort(indexB.begin(), indexB.end(), [&B](int a, int b) {return B[a] > B[b];}); // decsending sort
        int least = 0;
        int largest = B.size()-1;
        for (int index : indexB) {
            ans[index] = (A[largest] > B[index])? A[largest--] : A[least++];
        }
        return ans;
        
    }
};
