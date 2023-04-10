//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
 
    int maxIntersections(vector<vector<int>> lines, int N) {
        // Code here
       int ans=0, count=0;
        map<int , int>map1;
       for(int i=0; i<N; i++)
       {
           map1[lines[i][0]]++;
           map1[lines[i][1]+1]--;
         
        }
        
        map<int, int>::iterator itr;
   
    for (itr = map1.begin(); itr != map1.end(); ++itr) {
       count+= itr->second;
        ans=max(ans,count);
    }
       
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends