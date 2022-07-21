//from start and end all charcters are same
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter no. of character"<<endl;
    int n;//input letter
    cin>>n;

    cout<<"Enter character "<<endl;
    char arr[n+1];//input letter with 0
    cin>>arr;

    bool check = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check == true)
    {
        cout<<"word is palindrome"<<endl;
    }
    else
    {
        cout<<"word is not a palindrome"<<endl;
    }
    return 0;
}