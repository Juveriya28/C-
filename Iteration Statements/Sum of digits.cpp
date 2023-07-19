/*Sum of Digits
PrepBuddy gave you a number X and asks you to find the sum of the digits present in the number.

Input format
One integer is provided denoting the value of X.

Output format
Print the sum of digits of X.

Constraints
1<=X<=10^6

Time Limit
1 second
Example
Input
102345

Output
15

Sample test case explanation
Sum of digit =1+0+2+3+4+5=15*/
#include <iostream>

using namespace std;

int main()
{
   //write your code here
    int n,r;
    int sum=0;
    cin>>n;
    while(n>0)
    {
      r=n%10;
      n=n/10;
      
      sum=sum+r;
    }
    cout<<sum;
    return 0;
  }