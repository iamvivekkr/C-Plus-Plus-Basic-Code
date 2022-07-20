#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter values in array: "<<endl;

    for (int i = 0; i < n; i++)
    {
        
        cin>>array[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }
    cout<<"Maximim is "<<maxNo<<" "<<"Minimum is "<<minNo<<endl;
    

    
    return 0;
}