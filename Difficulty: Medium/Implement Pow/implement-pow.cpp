//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  double be(double b,int e){
      if(e==0) return 1;
      double ans=be(b,e/2);
      if(e%2==0) return ans*ans;
      else return ans*ans*b;
  }
    double power(double b, int e) {
        // code here
        if(e==0)return 1;
        else if(e==1)return b;
        else{
            if(b>0 && e>0){
                double res=be(b,e);
                return res;
            }
            else if(b<0 && e>0 && e%2==0){
                double res=be(-b,e);
                return res;
            }
            else if(b<0 && e>0 && e%2==1){
                double res=be(-b,e);
                return -res;
            }
            else if(b>0 && e<0 && e%2==0){
                double res=be(b,-e);
                return 1/res;
            }
            else if(b>0 && e<0 && e%2==-1){
                double res=be(b,-e);
                return (1/res);
            }
            else if(b<0 && e<0 && e%2==0){
                double res=be(-b,-e);
                return 1/res;
            }
            else if(b<0 && e<0 && e%2==-1){
                double res=be(-b,-e);
                return -(1/res);
            }
            else return b;
        }
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends