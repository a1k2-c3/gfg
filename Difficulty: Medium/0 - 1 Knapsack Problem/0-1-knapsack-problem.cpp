//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int profit(int idx,int n,vector<int> &val,vector<int> &wt,int capacity,vector<vector<int>>&dp){
      if(idx>=n) return 0;
      if(dp[idx][capacity]!=-1) return dp[idx][capacity];
      int l=0,r=0;
      if(capacity>=wt[idx]){
          l=val[idx]+profit(idx+1,n,val,wt,capacity-wt[idx],dp);
      }
      r=profit(idx+1,n,val,wt,capacity,dp);
      return dp[idx][capacity]=max(l,r);
  }
    // Function to return max value that can be put in knapsack of capacity.
    int knapSack(int capacity, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n,vector<int>(capacity+1, -1));
        int maxpro=profit(0,n,val,wt,capacity,dp);
        return maxpro;
    }
};

//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapSack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends