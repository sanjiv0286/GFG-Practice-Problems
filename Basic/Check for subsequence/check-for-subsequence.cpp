//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

// } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string b, string a) 
    {
        // code here
        int n = a.size();
        int m = b.size();
        int i,j=0;
        // while(i<m&& j<n){
        for(int i=0;i<n && j<m;i++){
            if(a[i]==b[j]){
                // i++;
                j++;
            }
            // else{
            //     i++;
            // }
        }
        return (j==m);
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 

// } Driver Code Ends