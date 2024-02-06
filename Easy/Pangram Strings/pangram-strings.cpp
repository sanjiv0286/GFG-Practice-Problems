//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool isPanagram (string s) {
        unordered_set<char> ss;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        for(auto &x:s){

            if((x>='a' && x<='z'))
                ss.insert(x);
        }
        return (ss.size() == 26);
        
    }

};








//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		cout << ob.isPanagram(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends