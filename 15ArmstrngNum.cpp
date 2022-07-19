//kisi number k digit k cube krne p usko add krne pe sameno  mile to wo armstrong hoga jaise 153 = 1^3 + 5^3 + 3^3 = 153
//this code is right if issues try online compiler
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0)
    {
        int lastdigit= n%10; //find last digit
        sum+= pow(lastdigit,3);//cube of last digit by using pow functing and add them
        n=n/10;//remove last digit to check next num
    }

    if(sum==originaln)
    {
        cout<<"Armstrong num"<<endl;
    }
    else
    {
        cout<<"Not Armstrong num"<<endl;
    }
    
    return 0;
}