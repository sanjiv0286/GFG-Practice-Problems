//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sunday = S/7;
        int buyingDays = S-sunday;
        //   if(M>N){
        //     return  -1;
        //   }
        int ans = ((S*M)/N);
        if((S * M) % N != 0){
            ans++;
        }
        if(ans<=buyingDays)
        return (ans);
        else{
            return -1;
        }
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends