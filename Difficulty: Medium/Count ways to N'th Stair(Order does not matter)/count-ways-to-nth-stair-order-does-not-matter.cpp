//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		    vector<int>res;
		    if(n%2!=0){
	            res.push_back(1);
	            n=n-1;
		        }
		    while(n!=0)
		    {
		        res.push_back(2);
		        n=n-2;
		    }
		    int c=1;
		    for(int i=0;i<res.size();i++)
		    {
		        if(res[i]==2) c+=1;
		    }
		    return c;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends