//vector or dynamic aaray(size is not declare so u can add as many elements u want)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//declaration
    v.push_back(1);//adding element
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";//to print
    }cout<<endl;

    //OR

    vector<int>::iterator it;
    for (it  = v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    //OR

    for(auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();//last element deleted
    for(auto element:v)
    {
        cout<<element<<" ";
    }
    

    return 0;
}