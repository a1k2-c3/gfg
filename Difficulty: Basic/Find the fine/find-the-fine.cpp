//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  int even(vector<int>f,vector<int>c)
  {
      int sum=0;
      for(int i=0;i<f.size();i++){
          if(c[i]%2==0) sum+=f[i];
      }
      return sum;
  }
  int odd(vector<int>f,vector<int>c)
  {
      int sum=0;
      for(int i=0;i<f.size();i++){
          if(c[i]%2==1) sum+=f[i];
      }
      return sum;
  }
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        if(date%2==0) return(odd(fine,car));
        else return(even(fine,car));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int date;
        cin >> date;
        cin.ignore();

        vector<int> car;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            car.push_back(number);
        }

        vector<int> fine;
        string input2;
        getline(cin, input2); // Read the entire line for the array elements
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            fine.push_back(number2);
        }
        Solution obj;
        cout << obj.totalFine(date, car, fine) << endl;
    }
    return 0;
}

// } Driver Code Ends