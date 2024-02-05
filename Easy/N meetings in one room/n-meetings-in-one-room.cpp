//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
   static bool cmp(pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    }
    
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        vector<pair<int,int>>payr(n);
        for(int i=0;i<n;i++){
           payr[i]= make_pair(s[i],e[i]);
        }
        sort(payr.begin(),payr.end(),cmp);
        int end = payr[0].second;
        int ct=1;
        for(int i=1;i<n;i++){
            if(payr[i].first > end){
                ct++;
                end= payr[i].second;
            }
        }
        return ct;
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends