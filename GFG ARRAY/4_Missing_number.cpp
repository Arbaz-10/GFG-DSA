//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int arr[], int size){
    int total = (size*(size-1))/2;
    for(int i=0; i<size-1; i++){
        total -= arr[i];
    }
    return total;
}

int main()
{
	int t; cin>>t;
	while(t--){
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
		cout<<missingNumber(a, n)<<endl;
	}
}