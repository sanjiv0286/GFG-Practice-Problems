//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
     long long j=m-1;
     long long i =0;
       long long mini = LLONG_MAX;
       sort(a.begin(),a.end());
    // for( long long i=0;i<n;i++){
    while(j<n){
         long long val = abs(a[i++]-a[j++]);
         mini  = min(mini,val);
        // j++;
    }
    return mini;
    
    }   
};




//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends