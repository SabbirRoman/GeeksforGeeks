//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        string s;
        while(n)
        {
            if(n%2) s+='1';
            else s+='0';
            n/=2;
        }
        int cnt=0;
        n=s.size();
        if(s[n-1]=='1') cnt++;
        if(n>1 && s[n-2]=='1' ) cnt++;
        else cnt=0;
        
        for(int i=n-3; i>=0; i--)
        {
            if(s[i]=='1')cnt++;
            else cnt=0;
            if(cnt==3) s[i]='0',cnt=0;
        }
        
        int ans=0;
        cnt=1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1') ans+=cnt;
            cnt*=2;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends