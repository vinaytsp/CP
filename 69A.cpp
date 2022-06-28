#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    int xs=0,ys=0,zs=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        xs+=x[i];
        ys+=y[i];
        zs+=z[i];
    }
    if(xs==0 && ys==0 && zs==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}