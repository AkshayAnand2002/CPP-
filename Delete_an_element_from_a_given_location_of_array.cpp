#include<iostream>
using namespace std;
int main(){
	int num[20],n,i,pos;
	cout<<"ENTER NO. OF ARRAY ELEMENTS: ";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS: "<<endl;
	for(i=0;i<n;i++){
		cout<<"ENTER ELEMENT IN POCKET ["<<i<<"]";
		cin>>num[i];
	}
	printf("ENTER --INDEX-- OF ARRAY ELEMENT TO DELETE: ");
	cin>>pos;
	for(i=pos;i<n;i++){
		num[i]=num[i+1];
	}
	n--;
	cout<<"ARRAY ELEMENTS AFTER DELETE: "<<endl;
	for(i=0;i<n;i++){
		cout<<num[i]<<endl;
	}
	return 0;
}
