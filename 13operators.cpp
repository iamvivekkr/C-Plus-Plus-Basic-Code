// 1. system defined header file: it comes with compiler
#include<iostream>
using namespace std;
int main()
{
    int a =10, b=5;
    // airthmetic operators
    cout<<"The value of a+b is "<<a + b<<endl;
    cout<<"The value of a-b is "<<a - b<<endl;
    cout<<"The value of a*b is "<<a * b<<endl;
    cout<<"The value of a/b is "<<a / b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<--a<<endl;

// assignment operators----> used to assigned value to variables: =, +=, -=, *=, /=
/* int a = 4, b= 7;
   char d = 'e'; */

//bitwise operators: &(and), |(or), ~(ones compliment), ^(xor), >>(rt shift), <<(lt shift)

   // comparision operators or relational
   cout<<"The value of a==b is "<<(a == b)<<endl;
   cout<<"The value of a!=b is "<<(a != b)<<endl;
   cout<<"The value of a>b is "<<(a > b)<<endl;
   cout<<"The value of a<b is "<<(a < b)<<endl;
   cout<<"The value of a>=b is "<<(a >= b)<<endl;
   cout<<"The value of a<=b is "<<(a <= b)<<endl;

   // logical operators
   cout<<"The value of logical and operator "<<((a==b) && (a<b))<<endl;
   cout<<"The value of logical or operator "<<((a==b) || (a>b))<<endl;  
   cout<<"The value of logical not operator "<<(!(a==b))<<endl;
   return 0;
   
}
   