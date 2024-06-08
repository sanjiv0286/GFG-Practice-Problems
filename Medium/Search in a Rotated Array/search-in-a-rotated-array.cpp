//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(int A[], int l, int h, int t) {
        // int n = A.length();
        // int l = 0,h=n-1;
        int n = h+1;
        while(l<=h){
            int mid = (l+h)/2;
            if(A[mid]==t)
            return mid;
            // *left half of array is sorted or not  
            if(A[mid]>=A[l]){
                //* consider this half is sorted or not 
                if(t>=A[l]&&t<=A[mid]){
                    //* left half is sorted
                    h = mid-1;
                }
                else{
                    // *right half is sorted
                    l = mid+1;
                }
            }
             // *right half of array is sorted or not  
            else{
                 //* consider this half is sorted or not 
                 if(t>A[mid]&&t<=A[n-1]){
                    //*right half is sorted
                    l = mid+1;
                 }
                 else{
                    // * left half is sorted 
                    h= mid-1;
                 }
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
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
    return 0;
}
// } Driver Code Ends