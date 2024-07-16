//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        vector<int> x;
        for(int i=0;i<arr.size();i++){
            if (arr[i]==key){
                x.push_back(i);
                break;
            }
        }
        for(int y=(arr.size()-1);y>-1;y--){
            if (arr[y]==key){
                x.push_back(y);
                break;
            }
        }
        if (x.size()==0) return {-1,-1};
        else return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> res;
        vector<int> arr;
        string s;
        getline(cin, s);
        stringstream ss(s);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int key;
        cin >> key;
        cin.ignore();
        Solution ob;
        res = ob.findIndex(arr, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends