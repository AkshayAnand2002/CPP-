#include<iostream>
using namespace std;
int main(){
	int x,y,i,f,sum=0;
	cout<<"ENTER FIRST NO.: ";
	cin>>x;
	cout<<"ENTER LAST NO.: ";
	cin>>y;
	while(x<=y){
		f=0;
		for(i=2;i<=x/2;i++){
			if(x%i==0){
				f=1;
				break;
			}
		}
		if(f==0){
			sum=sum+x;
			cout<<x<<" IS A PRIME NO.\n";
		}
		x=x+1;
	}
	cout<<sum<<" IS THE SUM OF PRIME NUMBERS.\n";
}
