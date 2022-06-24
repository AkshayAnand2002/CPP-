#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <cstring.h>
using namespace std;
int check_vowel(char check_character)              // To check the vowels
{
if (check_character == 'a' || check_character =='A' ||
check_character == 'e' || check_character =='E' || check_character == 'i' ||
check_character =='I' || check_character == 'o' || check_character =='O' || check_character == 'u' || check_character =='U')
   return 1;
else
   return 0;
}
int main()
{
   string input_string;
   int j=0;
   cout<<"Enter the String:";                 // Getting Input String
   cin>>input_string;
   int string_length = 0;
   while (input_string[string_length])
       string_length++; // Calculating the size of the string
   char result_string[string_length];
   for(int i=0; i< string_length; i++)
   {
       int temp = check_vowel(input_string[i]);
       if (temp == 0) //if not a vowel, it will be attached to the new string
       {
        result_string[j] += input_string[i];
        j++;
       }
   }
   cout<<result_string;
return 0;
}
