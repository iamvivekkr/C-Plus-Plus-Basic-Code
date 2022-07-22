//fing nth fibonacci number(ki jaise 3rd position p konsa fibonacci num hoga)

//0,1,1,2,3,5,8,14,.....
//fib(n)=fib(n-1)+fib(n-2)
//base fib(0)=0  fib(1)=1
#include<iostream>
using namespace std;
int fib(int n)
{
    if (n==0 || n==1) //base case
    {
        return n;
    }
   
    
    
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    
    return 0;
}