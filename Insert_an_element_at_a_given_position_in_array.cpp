#include<iostream>
using namespace std;
int main(){
	int num[20],pos,ins,i,n;
	cout<<"ENTER NO. OF ARRAY ELEMENTS: ";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS: "<<endl;
	for(i=0;i<n;i++){
		cout<<"ENTER ELEMENTS IN POCKET ["<<i<<"] : ";
		cin>>num[i];
	}
	cout<<"ENTER --INDEX-- TO INSERT: ";
	cin>>pos;
	cout<<"ENTER NUMBER TO INSERT: ";
	cin>>ins;
	for(i=n;i>=pos;i--){
		num[i+1]=num[i];
	}
	num[pos]=ins;
	n++;
	cout<<"ARRAY ELEMENTS AFTER INSERT: "<<endl;
	for(i=0;i<n;i++){
		cout<<num[i]<<endl;
	}
	return 0;
}
