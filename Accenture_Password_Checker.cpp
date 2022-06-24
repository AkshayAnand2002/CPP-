/*
You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

� At least 4 characters
� At least one numeric digit
� At Least one Capital Letter
� Must not have space or slash (/)
� Starting character must not be a number
Assumption:
Input string will not be empty.

Example:

Input:
aA1_67
Output:
1

Sample Input:
a987 abC012
Output:
0
*/
#include<bits/stdc++.h>
using namespace std;
 
int CheckPassword(char str[],int n)
{
   //At least 4 characters
   if(n<4) return 0;
 
   //Starting character must not be a number
   if(str[0]-'0'>=0 && str[0]-'0'<=9) return 0;
 
   int a=0,cap=0,nu=0;
   while(a<n)
   {
       //Must not have space or slash (/)
       if(str[a]==' ' || str[a]=='/') return 0;
 
       //counting capital letters
       if(str[a]>=65&&str[a]<=90) {cap++;}
 
       //counting numeric digit
       else if(str[a]-'0'>=0 && str[a]-'0'<=9) nu++;
 
       //incrementing for while loop
       a++;
   }
   // returns 1 if there are > 0 numeric digits and capital letters
   return cap>0 && nu>0 ;
}
 
int main()
{
    string s;
    getline(cin,s);//getline allows accepting and reading single and multiple line strings from the input stream.
    int len=s.size();
    char *c=&s[0];
    cout<<CheckPassword(c,len);
}
