//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   static bool cmp(pair<pair<int,int>,int>&a,pair<pair<int,int>,int>&b){
        return a.first.second < b.first.second;
    }
    
    vector<int> maxMeetings(int N,vector<int> &s,vector<int> &f){
        vector<pair<pair<int,int>,int>>res;
         int n =s.size();
        for(int i=0;i<n;i++){
            res.push_back(make_pair(make_pair(s[i],f[i]),i+1));
        }
        sort(res.begin(),res.end(),cmp);
        // sort(res.begin(),res.end());// based on first ele in pair
        vector<int>ans;
        ans.push_back(res[0].second);
        int end = res[0].first.second;
        for(int i=1;i<n;i++){
            if(res[i].first.first>end){
                ans.push_back(res[i].second);
                end = res[i].first.second;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends