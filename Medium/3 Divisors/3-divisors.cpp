//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

#define ll long long int 
// class Solution
// {
// public:

//   bool prime(ll n)
// {
//     for (ll i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// vector<int> threeDivisors(vector<long long> query, int q)
// {
//     // Write your code here
//  vector<int>res;
//     for (int j = 0; j < q; j++)
//     {
       
//         int ct = 0;
//         ll num = query[j];
//         for (ll i = 1; i <= num; i++)
//         {
//             // if (i == 1 || i == 2 || i == 3)
//             // {
//             //     // result.push_back(ct);
//             // }
//             // if
//             // {
//                 ll root = sqrt(i);
//                 if ((root * root) == i && prime(i)==true)
//                 {
//                     ct++;
//                 }
//             // }
            
            
//         }
//         res.push_back(ct);
//     }
//     return res;
// }

// };
// ===================================

 class Solution
{
public:

  bool prime(ll n)
  {
      for (ll i = 2; i * i <= n; i++)
      {
          if (n % i == 0)
          {
              return false;
          }
      }
      return true;
  }

  vector<int> threeDivisors(vector<long long> query, int q)
  {
      vector<int> res;

      for (int j = 0; j < q; j++)
      {
          int ct = 0;
          ll num = query[j];

          // Iterate over numbers less than or equal to num
          for (ll i = 2; i * i <= num; i++)
          {
              if (prime(i) && i * i <= num)
              {
                  ct++;
              }
          }

          res.push_back(ct);
      }

      return res;
  }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends