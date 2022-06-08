/*Problem Description :
The Binary number system only uses two digits, 0 and 1 and number system can be called binary string. You are required to implement the following function:
int OperationsBinaryString(char* str);
The function accepts a string str as its argument. The string str consists of binary digits eparated with an alphabet as follows:
– A denotes AND operation
– B denotes OR operation
– C denotes XOR Operation
You are required to calculate the result of the string str, scanning the string to right taking one opearation at a time, and return the same.
Note:
No order of priorities of operations is required
Length of str is odd
If str is NULL or None (in case of Python), return -1
Input:
str: 1C0C1C1A0B1
Output:
1
Explanation:
The alphabets in str when expanded becomes “1 XOR 0 XOR 1 XOR 1 AND 0 OR 1”, result of the expression becomes 1, hence 1 is returned.
Sample Input:
0C1A1B1C1C1B0A0
Output:
0*/
#include<bits/stdc++.h>
using namespace std;
int OperationsBinaryString(char* str)
{
    if(str==NULL)
        return -1;
    int i=1;
    int a=*str-'0';
    str++;
    while(*str!='\0')
    {
        char p=*str;str++;
        if(p=='A') 
            a&=(*str -'0');//AND
        else if (p=='B')
            a|=(*str -'0');//OR
        else a^=(*str -'0');//XOR
            str++;
    }
    return a;
}
int main()
{
    string s;
    getline(cin,s);
    int len=s.size();
    char *str=&s[0];
    cout<<OperationsBinaryString(str);
}
//PYTHON PROGRAM--
/*
def OperationsBinaryString(str):
    a=int(str[0])
    i=1
    while i<len(str):
        if str[i]=='A':
            a&=int(str[i+1])
        elif str[i]=='B':
            a|=int(str[i+1])
        else:
            a^=int(str[i+1])
        i+=2
    return a
str=input()
print(OperationsBinaryString(str))
*/
//JAVA PROGRAM--
/*
import java.util.*;
class Main 
{
    public static int operationsBinaryString (String str) 
    {
        if(str==null)
            return -1;
        int res = str.charAt (0) - '0';
        for (int i = 1; i < str.length ();)
        {
            char prev = str.charAt (i);
            i++;
            if (prev == 'A')
                res = res & (str.charAt (i) - '0');
            else if (prev == 'B')
                res = res | (str.charAt (i) - '0');
            else
                res = res ^ (str.charAt (i) - '0');
            i++;
        }       
        return res;
    }
 
    public static void main (String[]args) 
    {
        Scanner sc = new Scanner (System.in);
        String str =sc.next();
        System.out.println (operationsBinaryString (str));
    } 
}
*/
