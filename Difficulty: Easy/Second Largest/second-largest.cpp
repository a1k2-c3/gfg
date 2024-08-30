//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        vector<int>res;
        int m=*max_element(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!= m) res.push_back(arr[i]);
        }
        sort(res.begin(),res.end());
        if(res.size()<1) return -1;
        else return(res[(res.size())-1]);
    }
};

//{ Driver Code Starts.

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
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends