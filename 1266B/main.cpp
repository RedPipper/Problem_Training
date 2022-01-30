#include <bits/stdc++.h>
#define ll long long int
using namespace std;


bool isPos(ll n){
    if(n%14 < 7 && n%14>0 && n>14) return 1; 
    return 0;
}


int main()
{
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        cout<<(isPos(x) ? "YES":"NO")<<'\n';
    }
    return 0;
}