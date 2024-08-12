//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
  bool check(vector<char>s2,char x)
  {
      for(int i=0;i<s2.size();i++)
      {
          if(s2[i]==x) return true;
      }
      return false;
  }
    string removeChars(string string1, string string2) {
        // code here
        vector<char>str2;
        for(int i=0;i<string2.size();i++)
        {
            str2.push_back(string2[i]);
        }
        vector<char>res;
        for(int i=0;i<string1.size();i++)
        {
            if(check(str2,string1[i])) continue;
            else res.push_back(string1[i]);
        }
        string result(res.begin(),res.end());
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}

// } Driver Code Ends