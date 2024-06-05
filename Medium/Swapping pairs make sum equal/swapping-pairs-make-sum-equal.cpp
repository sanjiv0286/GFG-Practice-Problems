//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        int s1 =0;
        int s2=0;
        for(int i=0;i<n;i++){
            s1 += a[i];
        }
         for(int i=0;i<m;i++){
            s2 += b[i];
            b[i]=2*b[i];
        }
        sort(b,b+m);
        
        
        for(int i=0;i<n;i++){
           int need = s2-s1+2*a[i];
           
           if(binary_search(b,b+m,need)){
               return 1;
           }
        }
        
        return -1;
        
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends