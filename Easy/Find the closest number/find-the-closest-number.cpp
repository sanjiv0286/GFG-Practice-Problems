//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int low=1;
        int high=n-2;
        if(arr[0]>=k) return arr[0];
        if(arr[n-1]<=k) return arr[n-1];
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k) return k;
            if(k>arr[mid]){
                if(k<arr[mid+1]){
                    int diff1=k-arr[mid];
                    int diff2=arr[mid+1]-k;
                    if(diff2<=diff1) return arr[mid+1];
                    else return arr[mid];
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(k>arr[mid-1]){
                    int diff1=k-arr[mid-1];
                    int diff2=arr[mid]-k;
                    if(diff2<=diff1) return arr[mid];
                    else return arr[mid-1];
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends