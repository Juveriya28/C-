/**Character Value
You are provided with this table containing a character and its value. Given one of this character as input you need to print it's corresponding value.
| P or p 	- PrepBytes      	|
| Z or z 	- Zenith         	|
| E or e 	- Expert Coder   	|
| D or d 	- Data Structure 	|

Input format
A single character

Output format
For each test case print the corresponding value of the given character.

Time Limit
1 second

Example
Input
e
Output
Expert Coder*/
#include <iostream>

using namespace std;

int main()
{
    string c;
    cout<<"Enter a character(p,e,d,z):";
    cin>>c;
    
    if(c=="P"||c=="p")
      cout<<"PrepBytes"<<endl;
    else if(c=="Z"||c=="z")
      cout<<"Zenith"<<endl;
    else if(c=="E"||c=="e")
      cout<<"Expert Coder"<<endl;
    else if(c=="D"||c=="d")
      cout<<"Data Structure"<<endl;
    return 0;
}