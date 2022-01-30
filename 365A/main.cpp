#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    while(n--){
        int x;
        cin>>x;
        bool ok = true;
        int hash[10];
        for(int i=0;i<10;++i)hash[i]=0;
        while(x){
            hash[x%10] = 1;
            x/=10;
        }
        for(int i=0;i<=k;++i)
        {
            if(!hash[i])ok = false;
        }
        ans += ok;
    }
    cout<<ans<<'\n';
    return 0;
}