// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int num) {
        // code here
        
        int org = num;
	int d =0,sum=0;
	int ct = (int)(log10(num)+1);
	while(num!=0){
		d = num%10;
		sum += pow(d,ct);
		num/=10;
	}
	return (org == sum);
	}
};