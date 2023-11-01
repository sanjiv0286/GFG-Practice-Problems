//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    vector<string> AllPossibleStrings(string s) {
        vector<string> subsequences;
        int n = s.length();
        
        for (int i = 0; i < (1 << n); i++) {
            string subseq;
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) != 0) {
                    subseq += s[j];
                }
            }
            if (!subseq.empty()) {
                subsequences.push_back(subseq);
            }
        }

        // Sort the subsequences lexicographically
        sort(subsequences.begin(), subsequences.end());

        return subsequences;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends