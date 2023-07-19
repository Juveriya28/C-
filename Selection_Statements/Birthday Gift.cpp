/*Birthday Gift
Abhishek and Gaurav are the best friends, today is Gaurav's birthday, but Abhishek forgot to buy a gift for him. Gaurav is very angry with him. Abhishek has an idea for a gift. Gaurav likes coding very much. So Abhishek gave him a problem to solve as his gift. Gaurav likes everything infinitely. Abhishek gave him a sequence problem, such that its first element is equal to 
A(S1=A), and the difference between any two adjacent elements is (Si-(Si−1)= C). In particular, Gaurav wonders if his favorite integer B
 appears in this sequence, that is, there exists a positive integer i such that Si= B. Gaurav is busy at his birthday party, he asks you to solve this problem.

Input Format
The first line contains an integer T denoting the number of test cases.In the first line of each test case, the input contains three integers A, B and C
. 
A is the first element of the sequence, B is Gaurav’s favorite number and the C is the difference between any two adjacent elements of the sequence, respectively.

Output Format
If B appears in the sequences print YES, otherwise print NO.*/
// Si- Si−1= C
#include <iostream>

using namespace std;

int main()
{
   
    int t;
    cin>>t;
    
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        int S1,S2;
        S1=(B-A)%C;
        S2=(B-A)/C;
        if (B == A) {
         cout<<"YES";
        }
        
        else if (C == 0) {
          cout<<"NO";
        } 
        else if (S1 == 0 && S2>= 0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }   
    }
}

