//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        int dp[m+1][n+1];
        for(int i=0; i<=m; i++) dp[i][0]=0;
        for(int i=0; i<=n; i++) dp[0][i]=0;
        
        for(int  i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                dp[i+1][j+1] = max({dp[i][j+1], dp[i+1][j], (dp[i][j]+ (X[i]==Y[j]))});
            }
        }
        
        int ans = (m+n)-dp[m][n];
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends