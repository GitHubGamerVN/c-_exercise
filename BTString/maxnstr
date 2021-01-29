#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("MaxNstr.inp","r",stdin);
    freopen("MaxNstr.out","w",stdout);
    string x,y;
    getline(cin,x);
    getline(cin,y);
    string st;
    for(int i=0;i<x.length();++i)
        for(int j=0;j<y.length();++j)
       if(x[i]==y[j]) st=st+x[i];
    sort(st.begin(), st.end());
    st[st.length()]='t';
    for(int k=st.length()-1;k>=0;--k)
        if(st[k]!=st[k+1]) cout<<st[k];
    return 0;
}
