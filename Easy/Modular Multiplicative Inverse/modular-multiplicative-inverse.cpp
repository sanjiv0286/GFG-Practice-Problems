//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++




class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        //Your code here
        int ans =-1;
        for(int b=1;b<=m-1;b++){
            if((a*b)%m==1){
                return b;
            }
        }
        return ans;
    }
};





//{ Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}
// } Driver Code Ends