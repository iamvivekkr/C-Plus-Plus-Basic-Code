#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    switch(age)
    {
        case 18:
            cout<<"You are 18 yrs.";
            break;
        case 8:
            cout<<"You are 8 yrs.";
            break;
        default:
            cout<<"No such case.";
    }

    return 0;
}