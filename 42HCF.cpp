/*
    HCF by Euclid Algorithm principal
    24=2*2*2*3
    42=2*3*7
    hcf= 6

    method 1:-
    42-24=18
    24-18=6
    18-6=12
    12-6=6 (hcf=6, last digit)
    6-6=0

    method 2:-
    42%24=18
    24%18=6 (hcf=6)
    18%6=0
*/

#include<iostream>
using namespace std;
int gcd(int a, int b) //gcd=greatest common factor
{
    while (b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
    
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}