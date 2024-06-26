//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int c[], int N, int K)
    {
        // Write Your Code here
        int mi=0,mx=0;
        int n = N;
        sort(c,c+N);
        for(int i=0;i<n;i++){
            mi += c[i];
            n -= K;
        }
        vector<int>v;
        v.push_back(mi);
        reverse(c,c+N);
          n = N;
        for(int i=0;i<n;i++){
            mx += c[i];
            n -= K;
        }
        v.push_back(mx);
        return v;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends