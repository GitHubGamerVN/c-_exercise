#include <bits/stdc++.h>
using namespace std;
string s,s1;
string t[600000];
int d,n;
int main()
{ freopen("INP.TXT","r",stdin);
freopen("OUT.TXT","w",stdout);
    cin >> s;
    n = 0;
    int h = 0;
    int l = s.length();
    d = (l+1)*l/2;
    for (int i=0;i<s.length();++i) {
        s1 = "";
        for (int j=i;j<s.length();++j)
        {
            s1 += s[j];
            ++n;
            t[n] = s1;
        }
    }
    for (int i=2;i<=n;++i)
        for (int j=1;j<=i-1;++j)
            {
                if (t[j]==t[i]) {--d;
                                 break;}
            }
            cout << d;
    return 0;
}
