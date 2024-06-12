//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        int ct=1;
        int res =0;
        
        for(int i=1;i<n;i++){
            if(a[res]==a[i]){
                ct++;
            }
            else{
                ct--;
            }
            if(ct==0){
                res =i;
                ct=1;
            }
        }
        ct=0;
        for(int i=0;i<n;i++){
            if(a[res]==a[i]){
                ct++;
            }
        }
        if(ct<=n/2){
            res =-1;
            return res;
        }
        return a[res];
        
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends