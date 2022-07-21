#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str = "asdxcfgvbh";
    //convert into upper case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] -=32; //a-A = 32
        }
        
    }
    cout<<str<<endl;

    //convert to lower case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] +=32;
        }
        
    }
    cout<<str<<endl;

    //by inbuild function
    string s = "erfvgbhjnkm";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    //sort number in string

    string p= "1234567";
    sort(p.begin(), p.end(), greater<int>());
    cout<<p<<endl;

    //print count of string which repeat max tym
    string t="dcfgvbbbbhnjasdfjdfghj";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[t[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>maxF)
        {
            maxF=freq[i];
            ans = i+'a';
        }
        
    }
    cout<<maxF<<" "<<ans<<endl;
    
    
    return 0;
}