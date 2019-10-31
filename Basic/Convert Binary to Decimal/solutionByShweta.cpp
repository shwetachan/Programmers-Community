#include<iostream>

using namespace std;

int binarytodecimal(int n)
{
    int l,d=0,num=1,x=0;
    while(n>=1)
    {
      l=n%10;
      n=n/10;
      x=l*num;
      d=d+x;
      num=num*2;
    }
return d;
}

int main()
{
    int n;
    cin>>n;
    cout<<binarytodecimal(n);
return 0;
}
