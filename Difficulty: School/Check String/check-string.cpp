//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        bool check (string s)
        {
        	//code here.
        	int c=0;
        	char check=s[0];
        	int n=s.size();
        	for(int i=0;i<s.size();i++){
        	    if(s[i]==check) c+=1;
        	}
        	if(c==n) return true;
        	else return false;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
		string s;
		cin >> s;
		Solution ob;
		if (ob.check (s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends