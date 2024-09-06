//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    string equilibrium(vector<int>& arr) {
        int total_sum = 0, left_sum = 0;
        
        for (int num : arr) {
            total_sum += num;
        }

        for (int i = 0; i < arr.size(); i++) {
             int right_sum = total_sum - left_sum - arr[i];
        
        if (left_sum == right_sum) {
            return "true";
        }
            left_sum += arr[i];
        }

        return "false";
    }
};




//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        string res = obj.equilibrium(arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends