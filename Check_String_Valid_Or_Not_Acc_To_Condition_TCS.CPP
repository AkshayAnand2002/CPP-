/*
Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. 
The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. 
The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.
(*>#): positive integer
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:
###***   -> Value of S
Output :
0   ? number of * and # are equal
*/
#include <bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    int a=0,b=0;
    getline(cin,s);
    for(auto i:s)
    if(i=='#') a++;
    else if(i=='*') b++;
    cout<<b-a;
}
//The auto keyword specifies that the type of the variable that is begin declared will automatically be deduced from 
//its initializer and for functions if their return type is auto then that will be evaluated by return type expression at runtime.
//PYTHON--
/*
s=input()
a=0
b=0
for i in s:
    if i=='*':
        a+=1
    elif i=='#':
        b+=1
print(a-b)
*/
//JAVA
/*
import java.util.*;
public class Solution
{
 	public static void main(String[] args)
 	{
        		Scanner sc=new Scanner(System.in);
        		String str=sc.next();
        		int count1=0,count2=0;
        		for(int i=0;i<str.length();i++)
        		{
                 		if(str.charAt(i)=='*')
                        		count1++;
                 		else if(str.charAt(i)=='#')
                         		count2++;
        		}
        		System.out.println(count1-count2);
	}
}
*/
