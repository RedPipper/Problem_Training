#include <bits/stdc++.h>
#define SIZE 'z'-'a'+1


using namespace std;

int main(){
    int t;//index of test cases
    cin>>t;
    while(t--){
        string input;//input variable
        cin>>input;

        int hash_map[SIZE];

        for(int i=0;i<SIZE;++i)
            hash_map[i] = 0;

        for(string::iterator i = input.begin();i!=input.end();++i)
            ++hash_map[*i-'a'];

        
        for(int i=0;i<SIZE;++i)
        {
            if(hash_map[i] == input.size()){
                cout<<-1;
                break;
            }
            while(hash_map[i]){
                cout<<char(i+'a');
                --hash_map[i];
            }
        }
        cout<<'\n';
    } 

    


    return 0;
}