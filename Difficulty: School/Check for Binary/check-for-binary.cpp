//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
   // Your code here
   int c=0;
   for(int i=0;i<str.length();i++){
       if(str[i]=='0' || str[i]=='1'){
           continue;
       }
       else{
           c+=1;
           break;
       }
   }
   if (c>0)return false;
   else return true;
}