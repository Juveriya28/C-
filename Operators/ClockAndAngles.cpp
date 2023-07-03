/*Clock and Angles
PrepBuddy has an analog clock which consists of two hands one for hour and another for minute. She wants to calculate the shorter angle formed between hour and minute hand at any given time.
Input format
The first line contains the number of test cases T
 
Each test case contains two integers h and m representing the time in hour and minute format.

Output format
For each test case on a new line, print the required shorter angle.

Constraints
1<=T<=5
All valid times

Time Limit
1 second

Example

Input
2 5 30
6 00
Output
15
180
*/
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int h,m;
        cout<<"Enter hour:"<<endl;
        cin>>h;
        cout<<"enter minutes:";
        cin>>m;
        
       float h_deg,m_deg;
       
       int angle;
       h_deg=h*30+m*0.5;
       m_deg=m*6;
       
       if(h_deg-m_deg<=180)
            angle=abs(h_deg-m_deg);
        else
            angle=abs(m_deg-h_deg);
            
        angle=min(angle,360-angle);
        cout<<angle<<endl;
       
        t--;
    }
}



