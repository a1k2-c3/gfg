//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        if(S.size()<3) return -1;
        int j=0;
        int mini=INT_MAX;
        map<char,int>mp;
        for(int i=0;i<S.size();i++){
            mp[S[i]]++;
            while(mp['0']>0 && mp['1']>0 && mp['2']>0){
                mini=min(mini,i-j+1);
                mp[S[j]]--;
                if(mp[S[j]]==0) mp.erase(S[j]);
                j++;
            }
        }
        return(mini==INT_MAX)? -1:mini;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends