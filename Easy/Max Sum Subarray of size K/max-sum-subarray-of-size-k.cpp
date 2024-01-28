//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    // long maximumSumSubarray(int k, vector<int> &arr , int n){
    //     long max_sum = INT_MIN;
    //     long sum =0;
    //     for(int i=0;i<n-k+1;i++){
    //         sum =0;
    //         for(int j=i;j<i+k;j++){
    //             sum += arr[j];
    //         }
    //         max_sum = max(max_sum ,sum );
    //     }
    //     return max_sum;
    // }
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        long sum =0;
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        long max_sum = sum;
        for(int i=k;i<n;i++){
            sum += arr[i]-arr[i-k];
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }
};




//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends