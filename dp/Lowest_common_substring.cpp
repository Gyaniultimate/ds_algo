class Solution {
     

public:
   int dp[1001][1001];
    int longestCommonSubsequencea(string text1, string text2) {
        
        if(text1.size()==0||text2.size()==0)
        {   dp[text1.size()][text2.size()]=0;
            return 0;}
        
        if(dp[text1.size()][text2.size()]!=-1)
            return dp[text1.size()][text2.size()];
        if(text1[text1.size()-1]==text2[text2.size()-1])
        { dp[text1.size()][text2.size()]=(1+longestCommonSubsequencea(text1.substr(0,text1.size()-1),text2.substr(0,text2.size()-1)));
         return dp[text1.size()][text2.size()];
        }
         else
{
    dp[text1.size()][text2.size()]= max(longestCommonSubsequencea(text1.substr(0,text1.size()-1),text2),longestCommonSubsequencea(text1,text2.substr(0,text2.size()-1)));
             return dp[text1.size()][text2.size()];
}
        
    }
    
    int longestCommonSubsequence(string text1, string text2)
    {
        memset(dp,-1,sizeof(dp));
        return longestCommonSubsequencea(text1,text2);
    }
};
