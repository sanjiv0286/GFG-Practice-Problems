//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
int N  = 1e7+9;
vector<bool>prime(N,true);
class Solution
{
public:
    
    vector<int> sieveOfEratosthenes(int n)
    {
        prime[0]=prime[1]=false;
        
        for(int i=2;i<=n;i++){
            if(prime[i]==true){
                for(int j=2*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int>v;
        for(int k=2;k<=n;k++){
            if(prime[k])
            v.push_back(k);
            
        }
        return v;
        // Write Your Code here
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends