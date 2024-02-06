//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   string  tolow(string s){
        for(auto &x:s){
            if(x>='A'&&x<='Z'){
                x= x+32;
            }
        }
        return s;
    }
    
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        unordered_set<int>ss;
        string ans = tolow(s);
        for(auto &x:ans){
            if(x>='a'&&x<='z')
            ss.insert(x);
        }
        return (ss.size()==26);
    }

};



//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends