/*PrepBuddy and Socks
PrepBuddy is getting late for college. She is looking for a matching pair of socks from a box full of socks. In the worst-case scenario, how many socks should PrepBuddy remove from her drawer until she finds a matching pair.

Input format
The first line contains the number of test cases T Next T lines contain an integer N which indicates the total pairs of socks present in the drawer.

Output format
Print the number of draws PrepBuddy will have to make in the worst case.

Constraints
1<=T<=1000

1<=N<106

Time Limit
1 second

Example
Input
2
1
2
Output
2
3

Sample Test case Explanation
In the first test case, there is just 1 pair of socks i.e 2 socks in her drawer, so she has to remove both to get a pair, therefore the output is 2.*/
#include <iostream>

using namespace std;

int main()
{
  //write your code here
    int t;
    cout<<"Enter no of test cases:";
    cin>>t;
    while(t--)
    {
      int n,x;
      cout<<"Enter no of pairs of socks:";
      cin>>n;
      x=n+1;
      cout<<x<<endl;
    }
    return 0;
}
