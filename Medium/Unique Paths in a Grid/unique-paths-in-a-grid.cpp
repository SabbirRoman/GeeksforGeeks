//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        for(int i=1; i<m; i++) grid[0][i]&=grid[0][i-1];
        for(int i=1; i<n; i++) grid[i][0]&=grid[i-1][0];
        
        for(int i=1; i<n; i++)
        {
            for(int j=1;j<m; j++)
            {
                if(grid[i][j]!=0) grid[i][j]=grid[i-1][j]+grid[i][j-1];
                if(grid[i][j]>1e9) grid[i][j]%=1000000007;
            }
        }
        return grid[n-1][m-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends