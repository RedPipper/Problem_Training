#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a = max(a,b);

    a = 6-a+1;
    b = 6;
    if(a!=0){
        for(int i=2;i<=6;++i){
            while(a%i == 0 && b%i == 0){
                a/=i;
                b/=i;
            }
        }
    }
    printf("%d/%d\n", a, b);
    return 0;
}