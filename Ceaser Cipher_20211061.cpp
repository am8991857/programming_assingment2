/*
This is a Ceaser Cipher Program.
Done By: Abd El-Rahman Mohamed Fadl-Allah ID: 20211061
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
//creation of some varible that we will need
int n_shift;
string message;

cout<<"Please, Enter your message: ";
getline(cin, message);          //taking the message from the user..we used getline to make compiler read all the line

cout<<"HINT: Enter a -ve shifting for decryption.";
cout<<"Please Enter number of shifting you want: ";
cin>>n_shift;
if (n_shift > 26) 
{
    n_shift %= 26; //take mode number of shiting to make it appropriate to use
}

while (n_shift < 0)
    {n_shift += 26;} //here we add 26 when we find number of shifting is a -ve number to make it easy to use

for (int i = 0; i < message.length(); i++)
{
    if (isalpha(message[i]) == false) //here we will We print the letter as it is if it is not alphabetical
        cout<<message[i];  
    
    else
    {   //here if char is an alpahbetical char we weill check if it is in upper or lower case
        //and we will print char that have ascii code equal to the last char plus number of shifting

        if (isupper(message[i]))    {cout<<char(int(message[i] + n_shift - 65) % 26 + 65);} 
        else    {cout<<char(int(message[i] + n_shift - 97) % 26 + 97);}
    }
       
}    
}


















