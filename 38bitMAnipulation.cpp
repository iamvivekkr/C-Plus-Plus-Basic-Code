#include<iostream>
using namespace std;
int getBit(int n, int pos)
    {
        return ((n & (1<<pos))!=0);
    }
int setBit(int n, int pos)
    {
        return (n | (1<<pos));
    }
int clearBit(int n, int pos)
    {
        int mask =~(1<<pos);//~(1'scompliment)
        return (n & mask);
    }
int updateBit(int n, int pos, int value)
    {
        int mask =~(1<<pos);
        n = n & mask;
        return (n | (value<<pos));
    }
int main()
{
    cout<<getBit(5, 2)<<endl;
    /* n=0101(5)
    suppose we need to get bit at a position, i=2
    1<<i=0100
    0101 & 0100 =0100
    if n & (1<<i)!=0, then bit is 1
    */
    cout<<setBit(5, 1)<<endl;
    /* n=0101(5)
    suppose we need to set a bit at position, i=1
    1<<i=0010
    0101|0010=0111(7)
    */
   cout<<clearBit(5,2)<<endl;
    /*
    n=0101
    suppose we need to get bit at a position, i=2
    1<<i=0100
    ~0100=1011
    0101 & 1011 = 0001(1)
    */
   cout<<updateBit(5,1,1)<<endl;
   /*
   n=0101
   suppose we need to get bit at a position, i=1 to1
   1<<i=0010
   ~0010=1101
   0101 & 1101 = 0101
   1<<i=0010
   0101 | 0010 = 0111(7)
   */
    return 0;
}