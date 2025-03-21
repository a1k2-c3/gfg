//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int>res;
        map<int,int>mp;
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
        }
        int a=mp.rbegin()->first;
        res.push_back(a);
        int pos=0;
        for(int i=k;i<arr.size();i++){
            mp[arr[pos]]--;
            if(mp[arr[pos]]==0)mp.erase(arr[pos]);
            mp[arr[i]]++;
            res.push_back(mp.rbegin()->first);
            pos++;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends