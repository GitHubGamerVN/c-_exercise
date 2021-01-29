#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("INP.TXT","r",stdin);
    freopen("OUT.TXT","w",stdout);
    string n;
    cin>>n;
    int k;
    cin>>k;
    while(k>0)
    {
        for(int i=0;i<n.length()-1;++i)
        if(n[i]>n[i+1]) {n.erase(i,1); --k;break;}
    }
    cout<<n;
    return 0;
}
