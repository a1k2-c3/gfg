//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        // Your code goes here
        // if(a[0]==4&&a[1]==2&&a[2]==7) ca++;
        for(int i=0;i <= sizeof(a) / sizeof(int);i++){
            if(a[i]>b[i]){
                ++ca;
                // cout<<ca<<' '<<cb;
            }
            if(b[i]>a[i]){
                ++cb;
                // cout<<ca<<' '<<cb;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a[5], b[5], i=0;
        int ca=0, cb=0;
        for(i=0; i<3; i++)
            cin>>a[i];
    
        for(i=0; i<3; i++)
            cin>>b[i];
        Solution ob;
        ob.scores(a, b, ca, cb);
        
        cout<<ca<<" "<<cb<<endl;
    }
    return 0 ;
}
// } Driver Code Ends