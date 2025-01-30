//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
int c=0;
void recursive(string &str,string &ds,int freq[], int k,string &fin){
    if(ds.size()==str.size()){
        c++;
        if(c==k){
            fin=ds;
            return;
        }
        return;
    }
    if(c == k) return;
    for(int i=0;i<str.size();i++){
        if(!freq[i]){
            ds.push_back(str[i]);
            freq[i]=1;
            recursive(str,ds,freq,k,fin);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
    string kthPermutation(int n, int k)
    {
        // code here
        string str;
        for(int i=1;i<=n;i++){
            string app=to_string(i);
            str+=app;
        }
        string fin;
        int freq[str.size()]={0};
        string ds;
        recursive(str,ds,freq,k,fin);
        return fin;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends