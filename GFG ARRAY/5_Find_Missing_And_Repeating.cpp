//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int *ans = new int[2];
        int count[n+1] = {0};
        
        for(int i=0; i<n; i++)  count[arr[i]]++;
        for(int i=1; i<n+1; i++){
            if(count[i] == 0)  ans[1] = i;
            else if(count[i] > 1)  ans[0] = i;
        }
        return ans;
    }
};


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
    
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

void getTwoElements(int arr[], int n)
{
	int repeating(0), missing(0), i = 0;

	// Traverse on the array
	while (i < n) 
    {
		// If the element is on its correct position
		if (arr[i] == arr[arr[i] - 1]) i++;
		// If it is not at its correct position then place it to its correct position
		else  swap(arr[i], arr[arr[i] - 1]);
	}

	// Find repeating and missing
	for (int i = 0; i < n; i++) {
		// If any element is not in its correct position
		if (arr[i] != i + 1) {
			repeating = arr[i];
			missing = i + 1;
			break;
		}
	}

	// Print answer
	cout << "Repeating: " << repeating << endl
		<< "Missing: " << missing << endl;
}


int main(){
	int arr[] = { 2, 3, 1, 5, 1 };
	int n = sizeof(arr) / sizeof(int);
	getTwoElements(arr, n);

	return 0;
}
