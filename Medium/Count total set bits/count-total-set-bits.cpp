//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // ********O(n * log(n))**********
    // int countSetBits(int n)
    // {
    //     int ct=0;
    //     for(int i=1;i<=n;i++){
    //          int num=i;
    //         while(num>0){
               
    //             // if(num%2!=0){
    //             // ct++;
    //             // }
    //             // num=num/2;
    //             // *******O(log(n))**********
    //             // ct += (num & 1); // Check the least significant bit
    //             // num >>= 1;       
    //             // *****************
               
    //         }
            
    //     }
    //     return ct++;
    // }
    // ********O(n * log(n))**********
    // int countSetBits(int n) {
    // int ct = 0;
    // for (int i = 1; i <= n; i++) {
    //     int num = i;
    //     while (num > 0) {
    //         num = (num & (num-1));
    //         ct++;    
    //     }
    // }
    // return ct;
    // }
    // *************** O(n * log(n))**********************
    // int countSetBits(int n) {
        
    //     long long ans =0;
    //     for(long long i=1;i<=n;i++)
    //      ans +=  __builtin_popcount(i);
    //     return int(ans);
    // }
    // ************* O(logn)***********************
     int countSetBits(int N) {
        if(N<2) return N;
        int MSB = log2(N);
        return (MSB * (1 << (MSB - 1)) + (N-(1 << MSB)) + 1 + countSetBits (N-(1 << MSB)));
     }
    

};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends