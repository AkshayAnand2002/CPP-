/*
Print Prime number series for the given integer
Print the prime numbers from 1 to N, where N is an input.
Sample Input 1:
15
Sample Output 1:
2       3       5       7       11      13
Sample Input 2:
5
Sample Output 2:
2       3       5
*/
#include<iostream>
using namespace std;
bool isPrime(int);
int main(){
               int n;
               cin>>n;
               for(int i = 1; i <= n; i++) {
                              int isPrimeNumber = isPrime(i);
                              if(isPrimeNumber == true) {
                                             cout<<i<<"\t";
                              }
               }
               return 0;
}
// This function is identifying the number is prime or not 
bool isPrime(int n){
               bool flag = false;
               for(int i=2; i<=n/2; i++){
                              if(n%i == 0){
                                             flag = true;
                                             break;
                              }
               }
               if(flag == false && n > 1){
                              // Number is prime
                              return true;
               }
// Number is not a prime
               return false;
}
