#include<iostream>
using namespace std;
int main(){
	int num,num1,i,f;
	cout<<"ENTER STARTING NO: ";
	cin>>num;
	cout<<"ENTER LAST NO: ";
	cin>>num1;
	while(num<=num1){
		f=0;
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				f=1;
				break;
			}
		}
		if(f==0){
			cout<<num<<" IS A PRIME NO.\n";
		}
		num=num+1;
	}
}
