#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int l=0;
    for(int i=1;i<=n;++i)
    {
        scanf("%d", &a[i]);
        if(a[i]==1) l=l+1;
        else l=l-1;
    }
    if(l<0) l=-l;
    cout<<l;
    return 0;
}
