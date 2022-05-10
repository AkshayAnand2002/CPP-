#include<iostream> 
using namespace std;
int main()
{
    //Initializing variables.
    char str1[100],str2[100];
    int first[26]={0}, second[26]={0}, c=0, flag=0;
    //Accepting inputs.
    cout<<"Enter First String: ";
    gets(str1);
    cout<<"Enter Second String: ";
    gets(str2);
    //Calculating frequencies of characters in first string.
    while(str1[c] != '\0')
    {
        first[str1[c]-'a']++;
/*  a[c] - 'a'  ---->
Will evaluate to 0 for a, 1 for b and so on. because first is an array of ints, 26 long (int first[26]), each lower-case letter will have a valid, 
corresponding index ('a' - 'a' = 0, 'z' - 'a' = 25),so you're basically counting the occurrences for each character. second[b[c] - 'a']++ does the
exact same thing for the second string: counting the occurrences of each letter in the string. At the end, you're iterating over these letter-count 
arrays, comparing the values for each letter (occ. count). If all of the letters occur an equal amount of times in both strings, you're dealing with an anagram. 
If not, you're returning 0.
*/
        c++;
    }
    c=0;
    //Calculating frequencies of characters in second string. 
    while(str2[c] != '\0')
    {
        second[str2[c]-'a']++;
        c++;
    }
    //Checking if frequencies of both the strings are same or not.
    for(c=0;c<26;c++)
    {
        if(first[c] != second[c])
            flag=1;
    }
    //Priting result.
    if(flag == 0)
    {
        cout<<"Strings are anagram.";
    }
    else
    {
        cout<<"Strings are not anagram.";
    }
    return 0;
}
