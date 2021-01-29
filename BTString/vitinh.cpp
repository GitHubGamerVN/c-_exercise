#include<bits/stdc++.h>
using namespace std;
unsigned long long lt10(int i)
{
    if(i==0) return 1;
    long long kq=1;
    for(int j=1;j<=i;++j)
        kq=kq*10;
    return kq;
}
int main()
{
    freopen("vitinh.inp","r",stdin);
    freopen("vitinh.out","w",stdout);
    unsigned long long n;
    cin>>n;
    ostringstream tg;
    tg<<n;
    string s=tg.str();
    int l=s.length();
    long long c=0;
    long long a,b;
    for(int i=1;i<=l;++i)
    {
        if(i==l)
        {
             a=n-lt10(i-1)+1;
             b=a*i;
            c=c+b;
        }
        else
        {
            a=9*lt10(i-1);
            b=a*i;
            c=c+b;
        }
    }
    cout<<c;
    return 0;
}
