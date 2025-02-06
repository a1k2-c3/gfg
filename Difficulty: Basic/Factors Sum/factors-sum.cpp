//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    long long factorSum(int N)
    {
        // Your code goes here
        long long  s=0;
        for(long long i=1;i*i<=N;i++){
            if(N%i==0){
                s+=i;
                if(N/i!=i)s+=N/i;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
       	cout <<  ob.factorSum(N) << "\n";
   
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends