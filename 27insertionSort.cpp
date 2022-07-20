//insert an element from unsorted array to its correct position in sorted array
// Repetedly swap two adjacent elements if they are in wrong order
// at first sort max elemt will be stored in last
// n-1 times sorting apply
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 1;
   
        for (int i = 0; i < n; i++)
        {
            int current = arr[i];
            int j=i-1;
            while (arr[j]>current && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=current;
        }
    
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}