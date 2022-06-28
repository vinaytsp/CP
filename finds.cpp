#include<iostream>
#include<string>
using namespace std;
int main()
{
    size_t p = -1;
    string s1="WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
    string s2="WUB";
    size_t pos = s1.find(s2);
    s1.replace(pos,s2.length(),"");
     while ((p = s1.find(s2)) != string::npos)
     {
        s1.replace(p,s2.length()," ");
     }
    cout<<s1<<endl;
    return 0;
}