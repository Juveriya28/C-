/*Leap Year or Not
We all have made fun of our friends who have their birthdays on 
29th February.Given birthday year N of your friend, can you tell her if that is leap year or not? 

Input format
The first line contains an integer T denoting the number of test cases.Each test case contains one integer.

Output format
For each test case on a new line, print Yes if the given year is a leap year else print No.

Constraints
1<=T<=10
1<=N<=2500

Time Limit
1 second

Example
Input
2
1900
2012

Output
No
Yes*/
#include <iostream>

using namespace std;

int main()
{
    int t, y;
    cin>>t;
    while(t--)
    {
      cin>>y;
      if(y%4==0)
      {
        if(y%100==0)
        {
            if(y%400==0)
            {
              cout<<"Yes"<<endl;
            }
            else
            {
              cout<<"No"<<endl;
            }
        }
          else
            cout<<"Yes"<<endl;
      }
        else
        cout<<"No"<<endl;
    } 
    return 0;
 
}