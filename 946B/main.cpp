#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;
int main()
{
    ll n, m;
    cin>>n>>m;
    if(n < m<<1 && m < n<<1)cout<<n<<' '<<m;
    else{
        while( ( m >= (n << 1) || n >= (m << 1) ) && m && n){
            if(n)m %= (n<<1);
            if(m)n %= (m<<1);
        }
        cout<<n<<' '<<m;
    }
    return 0;
}