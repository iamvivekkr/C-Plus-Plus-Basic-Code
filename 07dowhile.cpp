#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    do
    {
        cout<<a<<endl;
        cin>>a;
    } while (a>0);
    
       //after getting negative num loop exit but it runs 1 time
    
    return 0;
}