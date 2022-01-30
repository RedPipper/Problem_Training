#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;//number of banknotes
    
    cin>>n;
    
    int list[n];
    for(int i=0;i<n;++i)
        cin>>list[i];

    sort(list, list+n);
    if(list[0]==1)cout<<-1;
    else cout<<1;

    return 0;
}