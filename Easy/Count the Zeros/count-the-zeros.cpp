//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
  int lastOcc(int arr[],int n ){
       int l = 0;
       int r= n-1;
       while(l<=r){
           int mid = (l+r)/2;
           if(arr[mid]==0){
               r = mid-1;
           }
           else{
               if(mid==n-1||arr[mid]!=arr[mid+1]){
                   return (mid);
               }
               else{
                   l = mid+1;
               }
           }
       }
       return -1;
   }



    int countZeroes(int arr[], int n) {
        // code here
        
        int lo = lastOcc(arr,n);
        
        return n-(lo+1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends