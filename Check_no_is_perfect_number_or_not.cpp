//PERFECT NO IS A NUMBER THAT IS EQUAL TO SUM OF ITS PROPER DIVISORS.
#include<iostream>
using namespace std;
int main(){
	int num,sum=0,i;
	cout<<"ENTER ANY NO: ";
	cin>>num;
	for(i=1;i<num;i++){
		if(num%i == 0){
			sum=sum+i;
		}
	}
	if(sum==num){
		cout<<num<<" IS A PERFEFCT NUMBER.";
	}
	else{
		cout<<num<<" IS NOT A PERFECT NUMBER.";
	}
}
