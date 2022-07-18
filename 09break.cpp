#include<iostream>
using namespace std;
int main()
{
    for(int i =1; i<=10; i++)
    {
        cout<<i<<endl; //when i = 5 then it terminate and print 1-5
        if(i==5)
        {
            break;   
        }
        //cout<<i<<endl; when i = 5 then it terminate and print 1-4

    }
    return 0;
}