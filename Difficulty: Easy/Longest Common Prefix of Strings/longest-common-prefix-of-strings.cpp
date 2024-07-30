//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        int n = arr.size();
        if(n==0){
            return "-1";
        }
        string ans ="";
        sort(arr.begin(),arr.end());
        string  first = arr[0];
        string last = arr[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                // return ans ;
                break;
            }
            ans += first[i];
        }
        // return ans ;
        if(ans == ""){
            return "-1";
        }
        else{
            return ans ;
        }
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends