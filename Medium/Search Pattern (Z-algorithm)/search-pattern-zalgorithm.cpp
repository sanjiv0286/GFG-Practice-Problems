//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code hee.
              vector<int>ans;
            
            int pos = text.find(pattern);
            while(pos!=string :: npos){
                ans.push_back(pos+1);
                pos = text.find(pattern,pos+1);
            }
            if(ans.empty()){
            ans.push_back(-1);
            return ans;
            }
            else
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
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends