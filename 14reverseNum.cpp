#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int reverse=0;
    while(n>0)
{
    int lastdigit= n%10;//find last digit
    reverse = reverse*10 + lastdigit;//incerase ones place and add them
    n=n/10;//remove last digit to check next num
}
cout<<reverse<<endl;
    return 0;
}