/*Second Smallest
You are given 
3 distinct integer numbers X,Y and Z. Task is to print the second smallest number among the three provided numbers.

Input format
Input contains 
3 distinct integers X,Y and Z.

Output format
Print the second smallest integer.

Time Limit
1 second

Constraints
1<=X,Y,Z<=100

Example
Input
10 42 15

Output
15*/
#include <iostream>

using namespace std;


  
  int main()
  {
    //write your code here
    int x,y,z;
    cin>>x>>y>>z;
    if(y<x && x<z)
      cout<<x;
    else if(x<y && y<z)
      cout<<y;
    else
      cout<<z;
    return 0;
  }