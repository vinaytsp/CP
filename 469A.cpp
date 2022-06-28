#include<iostream>
#include<ctype.h>
#include<set>
using namespace std;
int main()
{
    int n;
    set<int> l;
    cin>>n;
    int p,q;
    cin>>p;
    int x[p];
    for(int i=0;i<p;i++)
    {
        cin>>x[i];
    }
    cin>>q;
    int y[q];
    for(int i=0;i<q;i++)
    {
        cin>>y[i];
    }
    for(int i=0;i<p;i++)
    {
        l.insert(x[i]);
    }
    for(int i=0;i<q;i++)
    {
        l.insert(y[i]);
    }
    if(l.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}