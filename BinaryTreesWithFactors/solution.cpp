class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        long kMod = 1000000007;
        unordered_map<int, long> dp;
        sort(arr.begin(), arr.end());   // sorting the array first, we iterate from smallest one to largest
        for (int i = 0; i < arr.size(); i++) {
            dp[arr[i]] = 1; // each node has one way to make the tree (the root itself)
            for (int j = 0; j < i; j++) {
                if ( arr[i] % arr[j] == 0 && dp.count(arr[i] / arr[j]) ) // if we found both the b and a (c = a * b)
                    dp[arr[i]] += (dp[arr[j]] * dp[arr[i] / arr[j]]) % kMod;    // module kMod to prevent overflow
            }
        }
        long ans = 0;
        for (pair<int, long> ele : dp)
            ans += ele.second;
        return ans % kMod;
    }
    
};
