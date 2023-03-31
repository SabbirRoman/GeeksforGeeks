//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            vector<int>ans;
           
            int start=0;
            for(int i=1; i<n; i++)
            {
                if((a[i]&1) != (a[i-1]&1)){
                 sort(a.begin()+start, a.begin()+i, greater<int>());
                    for(int j=start; j<i; j++) ans.push_back(a[j]);
                    start=i;
                }
               
            }
            sort(a.begin()+start, a.begin()+n, greater<int>());
            for(int j=start; j<n; j++) ans.push_back(a[j]);
            
            return ans;        
            
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends