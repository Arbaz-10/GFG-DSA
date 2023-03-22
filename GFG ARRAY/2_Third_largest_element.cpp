// Third largest element :
/*
Calculate the sum of the first N natural numbers as sumtotal= N*(N+1)/2.
Traverse the array from start to end.
Find the sum of all the array elements.
Print the missing number as SumTotal – sum of array

Time Complexity: O(N)
Auxiliary Space: O(1)
*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int thirdLargest(int a[], int n){
        sort(a, a+n);   // 5 4 3 2 1
        return a[n-3];  // 
    }
};


int main()
{
    int t; cin>>t;
    while(t--)
    {
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   