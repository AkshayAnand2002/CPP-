#include<iostream>
using namespace std;
int main(){
	int num,i,f=0;
	cout<<"ENTER ANY NO.: ";
	cin>>num;
	for(i=2;i<=num/2;i++){
		if(num%i == 0){
			f=1;
			break;
		}
	}
	if(f==0){
		cout<<num<<" IS A PRIME NO.";
	}
	else{
		cout<<num<<" IS A COMPOSITE NO.";
	}
}
