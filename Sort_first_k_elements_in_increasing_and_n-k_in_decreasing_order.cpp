// C++ program to sort first k elements
// in increasing order and remaining
// n-k elements in decreasing
#include <bits/stdc++.h>
using namespace std;

// function to sort the array
void printOrder(int arr[], int n, int k)
{
	// Sort first k elements in ascending order
	sort(arr, arr + k);

	// Sort remaining n-k elements in descending order
	sort(arr + k, arr + n, greater<int>());
}

// Driver code
int main()
{
	int arr[] = { 5, 4, 6, 2, 1, 3, 8, 9, -1 };
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);

	printOrder(arr, n, k);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}

