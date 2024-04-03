//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s, string t)
    {
        if(s.size()!=t.size()){
            return false;
        }
        // Your code here
                unordered_map<char,char>m1,m2;

        for(int i=0;i<s.size();i++){
            if(m1[s[i]]==0&& m2[t[i]]==0){
                m1[s[i]]=t[i];
                m2[t[i]]=s[i];

            }
            else if(m1[s[i]]!=t[i]&&m2[t[i]]!=s[i]){
                return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends