//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends



class Solution{
public:
    int isFactorial(int N){
        //code here
        if(N==1){
            return 1;
            
        }
        for(int i=2;i<=N;i++){
             if(N%i==0){
                 N/=i;
                 
             }
             else{
                 return 0;
             }
             if(N==1){
                 return 1;
             }
             
       
        }
        return 0;
       
    }
};




//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isFactorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends