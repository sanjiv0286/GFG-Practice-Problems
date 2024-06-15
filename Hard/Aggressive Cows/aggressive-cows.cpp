//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
 
class Solution {
public:

   bool ispossible(int n ,int k,vector<int>&s,int dis){
       int coor= s[0];
       int ct =1;
       for(int i=0;i<n;i++){
           if((s[i]-coor)>=dis){
               ct++;
               coor= s[i];
           }
           if(ct==k){
               return true;
           }
       }
       return false;
   }

    int solve(int n, int k, vector<int> &s) {
        
        sort(s.begin(),s.end());
        int l =1;
        int h = s[n-1]-s[0];
        while(l<=h){
            int mid = (l+h)/2;
            if(ispossible(n,k,s,mid)){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return h;
        
    
        // Write your code here
    }
};





//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends