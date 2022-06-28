#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,highest;
    cin>>a>>b>>c;
    highest = a+b*c;
    highest=max(highest,a*(b+c));
    highest=max(highest,a*b*c);
    highest=max(highest,(a+b)*c);
    cout<<highest<<endl;
    return 0;
}
