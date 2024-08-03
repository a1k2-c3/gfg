//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lastIndex(string s) {
        int index=-1;
        for(int i=s.size()-1;i>-1;i--){
            if(s[i]=='1'){
                index=i;
                return index;
            }
        }
        return index;
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends