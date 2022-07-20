#include<iostream>
using namespace std;
int main()
{
    int marks[]={90, 78, 86, 98, 83};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    for(int i = 0; i<=4; i++)
    {
        cout<<"The value of marks "<<i<<" "<<marks[i]<<endl;
    }
    return 0;
}