
// longest palindromic subsequence (LCS)
class Solution {
    public String longestPalindrome(String s) {
        int n =  s.length();
        
        int[][] dp =  new int[n][n];
        int start=0,end =0;
       
        for(int k =0;k<n;k++){
        int i =0;
        int j =k;
        while(i!=(n-k) && j!=n){
            if(i==j)
                dp[i][j]=1;
            else if(i == j-1 && s.charAt(i)==s.charAt(j))
            { 
                dp[i][j]=1;
                start = i;
                end =j;
            }
            else if(dp[i+1][j-1]==1 && s.charAt(i)==s.charAt(j)){
                dp[i][j]=1;
                start = i;
                end =j;
            }
            else
                dp[i][j]=0;
            
            i++;
            j++;
        }
    }
        String s1 ="";
        for(int l =start;l<end+1;l++)
            s1+=s.charAt(l);
       
        return s1;
    }
}
