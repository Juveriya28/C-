/*Favourite Number
Among all the digits from 0−9, PrepBuddy likes number 5. He has lots of numbers and wants you to find out the number of times 5 occurred in each number.

Input format
The first line contains an integer T denoting the number of test cases.
Each of the next T lines contains a single integer N.

Output format
For each test case print, the number of times 5 occurred in N on a new line

Constraints
1<=T<=10
1<=N<=10^6

Time Limit
1 second

Example
Input
3
12345
345654
55555

Output
1
2
5
Note - Do not use any inbuilt function for solving this question.
Sample test case explanation
12345  -    contains 5 only one time
345654 -  contains 5 two times
55555 -   contains 5 five times*/
#include <iostream>
using namespace std;
  
int main()
{
    //write your code here
    int t,n,r;
    cin>>t;
    while(t--)
    {
       cin>>n;
        int count=0;
        while(n!=0)
        {
          r=n%10;
          if(r==5){
            count++;
          }
          n=n/10;
        }
        cout<<count<<endl;
    }
    return 0;
  }