/*
Given an integer matrix of size N x N. Traverse it in a spiral form.
Format:
Input:
The first line contains N, which represents the number of rows and columns of a matrix. The next N lines contain N values, each representing the values of the matrix.
Output:
A single line containing integers with space, representing the desired traversal.
Constraints: 0 < N < 500
Example:
Input:
3
1 2 3

4 5 6

7 8 9
Output:
1 2 3 6 9 8 7 4 5
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	//int count=1;
  	int round=ceil((double)n/2);
  	for(i=0;i<round;i++)
  	{	 
     	for(j=i;j<=n-i-1;j++)
            cout<<a[i][j]<<" ";
     	for(j=i+1;j<=n-i-1;j++)
            cout<<a[j][n-i-1]<<" ";
   		for(j=n-i-2;j>=i;j--)
 			cout<<a[n-i-1][j]<<" ";
   		for(j=n-i-2;j>i;j--)
          	cout<<a[j][i]<<" ";
  	}
}
