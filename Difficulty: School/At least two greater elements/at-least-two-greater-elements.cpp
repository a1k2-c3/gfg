//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here
        vector<int>res;
        sort(a,a+n);
        for(int i=0;i<n-2;i++){
            res.push_back(a[i]);
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution ob;
        vector <int> res = ob.findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}
// } Driver Code Ends