//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            if(i+1==arr[i]){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
    
    
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(nums);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x : ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends