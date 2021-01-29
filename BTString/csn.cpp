#include <bits/stdc++.h>
using namespace std;
unsigned long long k,n,n2,kq1,k2,kt,e,p;
unsigned long long scs(unsigned long long n1)
{ int i1;
 unsigned long long kq1=0;
 if(n1>9)
   { ostringstream tg1;
    tg1<<n1;
    string s1=tg1.str();
   unsigned long long  h1=s1.length();
    unsigned long long g1=10;

    for(i1=2;i1<=h1-1;++i1)
    {
        g1=g1*10;
    }
    unsigned long long x1=n1-g1;
   unsigned long long kq1=(x1+1)*h1;
unsigned long long m1=9;
    for(i1=1;i1<=h1-1;++i1)
    {

        kq1=kq1+m1*i1;
        m1=m1*10;
    }
return kq1;
    }
    if(n1<=9)
    {kq1=n1;
     return kq1;
    }


}


int main()
{

freopen("CSN.inp","r",stdin);
freopen("CSN.out","w",stdout);
   cin>>k;
    k2=k;
     n=0;
   unsigned long long l=1;
unsigned long long   i=9;
unsigned long long r=1;
kt=i*r;
   while(k>kt)
   {
       n=n+i;
       kt=i*r;
       k=k-kt;
       ++r;
       i=i*10;
       kt=i*r;
       ++l;
 }


e=10;

for(i=2;i<=l-1;++i) e=10*e;
p=k-l+(n+1)*l;

if(p%l==0)n2=p/l;
   else n2=p/l+1;

   kq1=scs(n2);
unsigned long long   q=kq1-k2;
ostringstream tg1;
tg1<<n2;
string s1=tg1.str();
int h=s1.length();
cout<<s1[h-1-q];


   return 0;
}
