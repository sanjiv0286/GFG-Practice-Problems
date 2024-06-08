//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends




class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
      unordered_map<int,int>m1,m2;
      for(int i=0;i<n;i++){
          m1[arr1[i]] = i;
      }
        for(int i=0;i<n-1;i++){
          m2[arr2[i]]=i;
      }
      int ans =-1;
      for(int i=0;i<n;i++){
          if(m2.find(arr1[i])==m2.end()){
                ans = m1[arr1[i]];
              return ans;
          }
      }
      return ans;
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> arr2[i];
        }
        Solution obj;
        cout << obj.findExtra(n, arr1, arr2) << endl;
    }
}
// } Driver Code Ends