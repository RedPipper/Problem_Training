#include <bits/stdc++.h>
using namespace std;

bool checkPalind(int *arr, int size, int to_ignore){
    int i = 0;
    int j = size-1;
    while(i<j){
        if(arr[i] != arr[j]){
            if(arr[i] == to_ignore){
                ++i;
                continue;
            }
            if(arr[j] == to_ignore){
                --j;
                continue;
            }
            return 0;
        }
        ++i;
        --j;
    }
    return 1;
}

int main()
{

    int t;//number of test cases
    cin>>t;
    while(t--){
        int n;//size of the array
        cin>>n;
        int arr[n];

        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        int i=0, j=n-1;//two pointers
        int x1=0 ,x2 = 0;

        bool ok = false;
        while(i<j){
            if(arr[i] != arr[j]){
                if( checkPalind(arr, n, arr[i]) )
                {
                    ok = true;
                }
                if( checkPalind(arr, n, arr[j]) )
                {
                    ok = true;
                }
                break;
            }
            ++i;
            --j;
        }
        if(!ok)ok = checkPalind(arr, n, 0);

        cout<<(ok ? "YES\n":"NO\n");
    }
    return 0;
}