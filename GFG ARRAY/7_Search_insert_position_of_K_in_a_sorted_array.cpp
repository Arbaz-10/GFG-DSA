#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int low = 0, high = N-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(k == Arr[mid])  return mid;
            if(k > Arr[mid])  low = mid+1;
            else  high = mid-1;
        }
        return low;
    }
};


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int N; cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++) cin>>Arr[i];
        int k; cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}