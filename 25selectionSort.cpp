//find the minimum element in unsorted array and swap with element at begining
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter size of array unsorted list: ";
    int n;
    cin>>n;
    cout<<"Enter unsorted array values: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; //swaping
            }
            
        }
        
    }
    cout<<"sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}