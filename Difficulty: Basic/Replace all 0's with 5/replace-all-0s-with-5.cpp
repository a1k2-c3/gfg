//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);


// } Driver Code Ends
/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        if (n==0) return 5;
        string res;
        while(n>0){
            int rem=n%10;
            if(rem==0) rem=5;
            res+=to_string(rem);
            n=n/10;
        }
        reverse(res.begin(),res.end());
        int r=stoi(res);
        return r;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;
    }
}
// } Driver Code Ends