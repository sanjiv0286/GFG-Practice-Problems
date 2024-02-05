//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        reverse(S.begin(),S.end());
        string res=""; 
        int start =0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                reverse(S.begin()+start,S.begin()+i);
                 res += S.substr(start, i - start)+".";
                start = i+1;
            }
        }
        reverse(S.begin()+start,S.end());
        res += S.substr(start,S.size()-start);
        return res;
    } 
};




//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends