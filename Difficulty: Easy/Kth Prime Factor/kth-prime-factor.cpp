//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kthPrime(int n, int k){
        // code here
        int r=0;
        vector<int>factors;
        for(int i=2;i<=n;i++){
            while(n%i==0){
                r++;
                n/=i;
                if(r==k)return i;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends