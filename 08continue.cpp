#include<iostream>
using namespace std;
int main()
{
    for(int i =1; i<=10; i++)
    {
        
        if(i==5)
        {
            continue;   //when i = 5 then it skip to print and continue to next
        }
        cout<<i<<endl;
    }
    return 0;
}