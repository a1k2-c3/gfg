//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void recursive(string &s,vector<string> &ans,string &ds,int freq[]){
      if(ds.size()==s.size()){
          ans.push_back(ds);
          return;
      }
      for(int i=0;i<s.size();i++){
          if(!freq[i]){
              ds.push_back(s[i]);
              freq[i]=1;
              recursive(s,ans,ds,freq);
              freq[i]=0;
              ds.pop_back();
              
          }
      }
  }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string>ans;
        string ds;
        int freq[s.size()]={0};
        recursive(s,ans,ds,freq);
        set<string>l(ans.begin(),ans.end());
        vector<string>fin(l.begin(),l.end());
        return fin;
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
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends