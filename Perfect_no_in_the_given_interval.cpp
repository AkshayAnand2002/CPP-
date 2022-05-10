#include<iostream>
using namespace std;
int main(){
	int num,num1,sum=0,i;
	cout<<"ENTER STARTING NO: ";
	cin>>num;
	cout<<"ENETER LAST NO: ";
	cin>>num1;
	while(num<=num1){
		sum=0;
		for(i=1;i<=num/2;i++){
			if(num%i==0){
			sum=sum+i;
			}
		}
		if(sum==num){
			cout<<num<<" IS A PERFECT NUMBER."<<endl;
		}
		num++;
	}
}
