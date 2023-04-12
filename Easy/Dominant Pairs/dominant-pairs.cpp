//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        vector<int> v;
        for(int i=0; i<n/2; i++)v.push_back(arr[i]);
        sort(v.begin(), v.end());
        
        int ans=0;
        for(int i=n/2; i<n; i++)
        {
            int tmp=5*arr[i];
            auto it=lower_bound(v.begin(),v.end(),tmp);
            ans+=(n/2 -(it-v.begin()));
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends