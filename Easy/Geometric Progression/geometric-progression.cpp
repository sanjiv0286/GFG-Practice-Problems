//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// // wrong ans code
long long m = 1e9+7;
class Solution {
  public:
  
    // long long power(long long n,long long r)
    // {
    //   //Your code here
    //   if(r==0)
    //   return 1;
    //   long long temp = power(n,r/2);
    //   temp = (temp*temp)%m;
    //   if(r%2==0){
    //       return (temp);
    //   }
    //   else{
    //       return (n*temp)%m;
    //   }
        
    // }
     long long   power( long long  x, long long  n,long long m)
    {
        
        long long  res=1;
     
      while(n>0){
        // if(n%2!=0){
      if(n&1){
          res =(res*x)%m;
      }
      
    //   n/=2;
      n= n>>1;
      x = (x*x)%m;
      }
      return res;
    } 
    long long geoProg(long long num) {
        // code here
      
        // long long a =1;
        // long long r=2;
        long long n=power(2,num,m-1);
        long long  val = power(2,n,m);
        // long long res = (((a)%m*(val)%m)%m *(power(r - 1, m - 2)) % m)%m;
        //   long long res = val%m;
        val--;
        return val;
        
    }
};



// class Solution {
//   public:
//     long long geoProg(long long N) {
//         long long int mod=1000000007;
//         long long  int rag=power(2,N,mod-1);
//         long long int po=power(2,rag,mod);
//         po=po-1;
        
//         return po;

//     }
    
    
//     long long  power(long long  y, long long int n,long long int mod)
// {
//     long long  res=1,x=y;
//     while(n>0)
//     {
//         if(n&1)
//             res=(res*x)%mod;
//         x=(x*x)%mod;
//         n=n>>1; 
//     }
//     return (res);
// }






// };


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.geoProg(N) << endl;
    }
    return 0;
}
// } Driver Code Ends