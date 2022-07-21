#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr = &a;
    cout<<aptr<<endl;
    cout<<a<<endl;
    cout<<*aptr<<endl;
    *aptr=20;//update value in a
    cout<<a<<endl;

    //print array through pointer increment
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;//cout<<*(arr+i)<<endl;through array increment
        ptr++;//not use in array increment
    }
    
    return 0;
}