//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool find(int x,int arr[],int n)
		{
		    for(int i=0;i<n;i++)
		    {
		        if(arr[i]==x) return true;
		    }
		    return false;
		}
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		int c=0;
		int len=(B-A)+1;
		for(int i=A;i<B+1;i++)
		{
		    if(find(i,arr,n)) c+=1;
		}
		if(len==c) return(true);
		else return(false);
	}


		 

};
	

//{ Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}







// } Driver Code Ends