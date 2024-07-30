//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int c=0;
    //  int index=-1;
     for(int i=0;i<s.size();i++){
         if(s[i]==x[0]){
             for(int j=1;j<x.size();j++){
                if(s[i+j]==x[j]){
                    c+=1;
                } 
                // cout<<c;
             }
        if(c==x.size()-1) return i;
        else c=0;
         }
     }
     return -1;
}