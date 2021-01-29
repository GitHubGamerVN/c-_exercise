#include <bits/stdc++.h>

using namespace std;
unsigned long long n;
void xl()
{
    int mu,d,res;
    unsigned long long tg=1;
    mu=0; d=0;
    while(tg<n)
    {
        ++mu;
        tg= tg*2;

    }
    while(n>2)
    {

        tg=tg/2;
        if (n> tg)
            {
                n= n - tg;
                ++d;
            }
    }
    if(n==1) res=0;
    else res=1;
    while(d>0)
    {
        res=(res+1)%3;
        --d;
    }
    cout<<res<<"\n";
}
int main()
{
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(scanf("%I64d", &n)==1)
    {
       // cout<<n<<endl;
        xl();
    }
    return 0;
}
