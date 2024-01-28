//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
public:
// ************** O(N^2)****************************************
    // int circularSubarraySum(int arr[], int n)
    // {

    //     // your code here
    //     int res=INT_MIN;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int curr_sum = arr[i];
    //         int max_sum = arr[i];
    //         for (int j = 1; j < n; j++)
    //         {
    //             int ind = (i + j) % n;
    //             curr_sum = max(arr[ind], arr[ind] + curr_sum);
    //             max_sum = max(max_sum, curr_sum);
    //         }
    //         res = max(res, max_sum);
    //     }
    //     return res;
    // }
// ***********************  O(N) ***************************
int max_normal(int arr[], int n)
{
    int curr_sum = arr[0];
    int max_sum = arr[0];
    for (int j = 1; j < n; j++)
    {
        // int ind = (i + j) % n;
        curr_sum = max(arr[j], arr[j] + curr_sum);
        max_sum = max(max_sum, curr_sum);
    }
    // res = max(res, max_sum);
    return max_sum;
}

int circularSubarraySum(int arr[], int n)
    {
        int maxNormalSubarray = max_normal(arr,n);
        if(maxNormalSubarray<0){
            return maxNormalSubarray;
        }
        int arr_sum =0;
        for (int i = 0; i < n; i++)
        {
            arr_sum += arr[i];
            arr[i]=-(arr[i]);
        }
        int maxCircularSubarray = arr_sum + max_normal(arr,n);
        return max(maxNormalSubarray,maxCircularSubarray);
    }

};


//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends