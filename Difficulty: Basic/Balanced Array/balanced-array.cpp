//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        int s=0;
        int c=0;
        for(int i=0;i<arr.size()/2;i++)
        {
            s+=arr[i];
        }
        for(int i=arr.size()/2;i<arr.size();i++)
        {
            c+=arr[i];
        }
        return(abs(s-c));
    }
};


//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.minValueToBalance(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends