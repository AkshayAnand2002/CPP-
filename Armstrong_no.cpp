#include<iostream>
using namespace std;
int main(){
	int num,temp,sum=0,c=0,p=1,rem,i;
	cout<<"ENTER ANY NO.: ";
	cin>>num;
	temp=num;
	while(temp != 0){
		c=c+1;
		temp=temp/10;
	}
	temp=num;
	while(temp !=0){
		rem=temp%10;
		p=1;
		for(i=1;i<=c;i++){
			p=p*rem;
		}
		sum=sum+p;
		temp=temp/10;
	}
	if(num==sum){
		cout<<num<<" IS AN ARMSTRONG NO. ";
	}
	else{
		cout<<num<<" IS NOT AN ARMSTRONG NO. ";
	}
}
