//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    public:
    int Maximize(vector<int> arr) {
        // Complete the function
         int c=0;
         int x = 1000000007;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            c= (c+(long long)arr[i]*i)%x;
        }
       
        return c;
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends