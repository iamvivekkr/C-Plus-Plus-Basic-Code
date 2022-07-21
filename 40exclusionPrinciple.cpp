//total = n1+n2-n3(x stu in n1, y stu in n2, and som stu in both n1 and n2 i.e n3)
//how many numbers between 1 nd 1000 are divisible by 5 or 7?
#include<iostream>
using namespace std;
int divisible(int n, int a, int b)
{
    int c1=n/a;//(c1 m jo a se divisible)
    int c2=n/b;//(c2 m jo b se divisible)
    int c3=n/(a*b);//(c3 m jo a aur b dono se divisible)

    return c1+c2-c3;
}
int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    
    cout<<divisible(n, a, b)<<endl;
    return 0;
}