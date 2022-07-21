//string and its function
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    // declaration:-

    string str;
    cin >> str;
    cout << str<<endl;

    string str1(5, 'v');
    cout << str1 << endl;

    string str2 = "vivek"; // without space
    cout << str2<<endl;

    string str4;        // with space
    getline(cin, str4); // getline add all  sentences
    cout << str4 << endl;

    string s1="fam";
    string s2="ily";
    cout<<s1+s2<<endl;
    //s1.append(s2);
    //cout<<s1<<endl;//by using append
    //s=s1+s2;
    //cout<<s<<endl;
    cout<<s2.compare(s1)<<endl;//by using compare, +ve means geater

    string st="vivek is a good";
    cout<<st;
    st.clear();//delete string
    cout<<st;
    if (st.empty())//by using empty func
    {
        cout<<"string is empty";
    }
    string gr="number";
    gr.erase(3,2);//delete from index 3 to reuired char like 2(er) using erase func
    cout<<gr<<endl;
    cout<<gr.find("num")<<endl;//by using find func
    cout<<gr.insert(2, "lol")<<endl;//add string by using insert func
    cout<<gr.size()<<endl;//find length use size or length
    cout<<gr.substr(6, 4)<<endl;//get substring from 6 to 4 digit

    string  num= "123";
    int x = stoi(num);//string to integer by using stoi func
    cout<<x+2<<endl;

    int y=345;
    cout<< to_string(y)+"2"<<endl;//integer to string by using to_string func

    string m1="xwdwdchcne";
    sort(m1.begin(), m1.end());//sort string by using sort func
    cout<<m1<<endl;
    return 0;
}