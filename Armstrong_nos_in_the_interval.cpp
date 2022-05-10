#include<iostream>
using namespace std;
int main(){
	int num,num1,temp,rem,c=0,p=1,sum=0,i;
	cout<<"ENTER STARTING NO: ";
	cin>>num;
	cout<<"ENTER LAST NO: ";
	cin>>num1;
	while(num<=num1){
		c=0;
		sum=0;
		temp=num;
		while(temp != 0){
			c=c+1;
			temp=temp/10;
		}
		temp=num;
		while(temp!=0){
			rem=temp%10;
			p=1;
			for(i=1;i<=c;i++){
				p=p*rem;
			}
			sum=sum+p;
			temp=temp/10;
		}
		if(sum==num){
			cout<<num<<" IS AN ARMSTRONG NO."<<endl;
		}
		num++;
	}
}
