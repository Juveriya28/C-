/***Multiply Numbers ***/
/**Let's practice multiplication a bit.
Write a program to take two integers x and y as input from the user, multiply those integers and print the product.

Input format
Two space-separated integers are provided x and y

Output format
Print a single integer representing the product of x and y as output.

 Constraints
−10<=a,b<=40

Time Limit
1second

Example: Input 5 5
        Output  25
        
Sample Test Case Explanation
5∗5=25 **/
#include <iostream>
  using namespace std;
  
  int main()
  {
    //write your code here
    int a,b,p;
    cout<<"Enter value for a and b:";
    cin>>a>>b;
    p=a*b;
    cout<<"Product of "<<a<<" and "<<b<<" is "<<p; 
  
    return 0;
  }
