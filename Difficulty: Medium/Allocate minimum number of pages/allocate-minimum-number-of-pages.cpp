//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
   bool isFeasible(int arr[],int n,int k,int ans){
        long long ct=1; long long sum =0;
       for(int i=0;i<n;i++){
           if((sum+arr[i])>ans){
               ct++;
               sum = arr[i];
           }
           else{
               sum += arr[i];
           }
       }
       return (ct<=k);
   }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int k) {
         long long maxi =0;
         long long sum=0;
        //  sort(arr,arr+n);
          maxi = *max_element(arr,arr+n);
        for (int i=0;i<n;i++){
            sum += arr[i];
            
        }
         if (k>n){
            return -1;
        }
        //  if(k==1){
        //     return sum;
        // }
        // if(n==1){
        //     return arr[0];
        // }
         long long l = maxi;
         long long h = sum ;
        long long res =0;
        while(l<=h){
             long long mid = (l+h)/2;
            if(isFeasible(arr,n,k,mid)){
                res = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
       return res;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends