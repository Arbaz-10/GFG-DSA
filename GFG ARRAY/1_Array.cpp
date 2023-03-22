// 1_Find_The_Largest_3_Distinct_element_in _an_array
// T.C - O(nlog m)  m is distance(middle-first).
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

void partialFunc(vector<int> V){
	partial_sort(V.begin(), V.begin() + 3, V.end(), greater<int>());
}

int main()
{
	// vector<int> V = { 11, 65, 193, 36, 209, 664, 32 };
	vector<int> V = { 11, 65, 19, 36, 20, 64, 32 };
	// partial_sort(V.begin(), V.begin() + 3, V.end(), greater<int>());

	partialFunc(V);

	cout << "first = " << V[0] << "\n";
	cout << "second = " << V[1] << "\n";
	cout << "third = " << V[2] << "\n";
	return 0;
}
