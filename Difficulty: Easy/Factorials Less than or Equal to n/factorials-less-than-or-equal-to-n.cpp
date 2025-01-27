//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long int fact(int n){
      if(n==0)return 1;
      else if(n==1)return 1;
      else return(n*fact(n-1));
  }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long int>ans;
        for(int i=1;i<=20;i++){
            long long int x=fact(i);
            if(x<=n) ans.push_back(x);
            else break;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends