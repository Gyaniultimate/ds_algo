class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<int> temp(text1.size()+1, 0);
        vector<vector<int>> L(text2.size()+1, temp);
        for(int i=1; i<=text2.size(); i++){
            for(int j=1; j<=text1.size(); j++){
                if(text2[i-1]!=text1[j-1]) L[i][j] = max(L[i-1][j], L[i][j-1]);
                else L[i][j] = 1+L[i-1][j-1];
            }
        }
        return L[text2.size()][text1.size()];
    }
};
