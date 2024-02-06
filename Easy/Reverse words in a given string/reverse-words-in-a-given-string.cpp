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
        // reverse(S.begin(),S.end());
        // string res=""; 
        // int start =0;
        // for(int i=0;i<S.size();i++){
        //     if(S[i]=='.'){
        //         reverse(S.begin()+start,S.begin()+i);
        //          res += S.substr(start, i - start)+".";
        //         start = i+1;
        //     }
        // }
        // reverse(S.begin()+start,S.end());
        // res += S.substr(start,S.size()-start);
        // return res;
        // ******************************************
        // string res="";
        // string temp="";
        // for(int i=S.size()-1;i>=0;i--){
        //     if(S[i]=='.'){
        //          reverse(temp.begin(),temp.end());
        //          res = res +temp+".";
        //          temp ="";
        //     }
        //     else{
        //         temp.push_back(S[i]);
        //     }
        // }
        // reverse(temp.begin(),temp.end());
        // res = res + temp;
        // return res;
        // **************************************************
        string temp ="";
        string ans = "";
        stack<string>st;
        int n = S.size();
        for(int i=0;i<n;i++){
            if(S[i]=='.'){
                st.push(temp);
                temp ="";
            }
            else{
                temp+=S[i];
            }
        }
        st.push(temp);
        
        while(st.size()>0){
            if(st.size()>1){
                ans = ans + st.top() + ".";
            }
            else{
                ans = ans + st.top();
            }
            st.pop();
        }
        return ans;
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