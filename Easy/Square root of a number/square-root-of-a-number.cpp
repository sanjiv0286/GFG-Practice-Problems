//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long long int l = 1;long long int r=x;long long int ans =-1;
        while(l<=r){
            long long int mid = (l+r)/2;
            long long int sq = mid*mid;
            if(sq==x){
                return mid;
            }
            else if(sq>x){
                r=mid-1;
            }
            else{
                l = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends