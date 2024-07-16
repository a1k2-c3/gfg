//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    void swapKth(int n, int k, vector<int> &arr) {
        vector<int>x=arr;
        for (int i=0;i<arr.size();i++){
            if (i==k-1){
                arr[i]=x[n-k];
            }
            else if(i==n-k){
                arr[i]=x[k-1];
            }
            else continue;
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        
        obj.swapKth(n, k, arr);
        Array::print(arr);
        
    }
}

// } Driver Code Ends