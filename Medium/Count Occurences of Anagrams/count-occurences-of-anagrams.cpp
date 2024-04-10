//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
// class Solution{
// public:
// 	int search(string pat, string txt) {
	    
// 	    int n = pat.size();
// 	    int m = txt.size();
// 	    vector<int>m1(26,0),m2(26,0);
// 	   // vector<int>m2(26,0);
// 	   for(auto &x:pat){
// 	       //m1[x]++;
// 	       m1[x-'a']++;
// 	   }
// 	   int l=0;
// 	   int r=0;
// 	   int ans =0;
// 	   while(r<m){
// 	       if(r<n-1){
// 	           m2[txt[r]-'a']++;
// 	       }
// 	       else if(r==n-1){
// 	           if(m1==m2)
// 	           ans++;
// 	       }
// 	       else if(r>n-1){
// 	           m2[txt[l]-'a']--;
// 	           l++;
// 	           if(m1==m2)
// 	           ans++;
// 	       }
// 	       r++;
// 	   }
// 	   return ans;
// 	}

// };



class Solution {
public:
    int search(string pat, string txt) {
        int n = pat.size();
        int m = txt.size();
        if (n > m) return 0; // Pattern length should not exceed text length
        
        vector<int> m1(26, 0), m2(26, 0);
        for (int i = 0; i < n; ++i) {
            m1[pat[i] - 'a']++;
            m2[txt[i] - 'a']++;
        }
        
        int ans = 0;
        if (m1 == m2) ans++; // Initial check
        
        for (int i = n; i < m; ++i) {
            m2[txt[i - n] - 'a']--; // Remove the character going out of the window
            m2[txt[i] - 'a']++; // Add the new character
            if (m1 == m2) ans++;
        }
        
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends