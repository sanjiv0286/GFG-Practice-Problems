//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        vector<long long int>v;
        long long int jor =0,res1=0,res2=0;
        for(long long i=0;i<n;i++){
            jor= jor^arr[i];
        }
        int val = jor & ~(jor-1);
        for(long long  i=0;i<n;i++){
            if((arr[i]&val) !=0){ // keep in mind this little mistake 
                res1 = res1 ^ arr[i];
            }
            else{
                res2 = res2 ^ arr[i];
            }
        }
        v.push_back(res1);
        v.push_back(res2);
        sort(v.begin(),v.end(),greater<int>());
        return v;
        

    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends