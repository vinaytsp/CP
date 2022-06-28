#include<iostream>
using namespace std;
int main()
{
    long long n,pos;
    cin>>n>>pos;
    if(pos<=((n+1)/2))
    {
        cout<<pos*2-1<<endl;
    }
    else
    {
        cout<<(pos - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}