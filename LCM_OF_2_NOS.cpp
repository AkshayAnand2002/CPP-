#include<iostream>
using namespace std;
int main(){
int num,num1,i,gcd,lcm;
cout<<"ENTER 2 NOS: ";
cin>>num>>num1;
for(i=1;i<=num1;i++){//we can write i<=num also or also (i<=num && i<=num1) 
		if(num%i==0 && num1%i==0){
			gcd=i;
			cout<<gcd<<endl;
		}
}
cout<<gcd<<" IS THE HCF OF TWO NOS."<<endl;
lcm=num*num1/gcd;
cout<<lcm<<" IS THE VALUE OF LCM."<<endl;
}
