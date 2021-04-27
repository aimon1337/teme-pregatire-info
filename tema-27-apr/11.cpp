#include <bits/stdc++.h>
using namespace std;
// ifstream fin("bac.txt");
//ofstream fout("iesire.txt");
void valuri(int n, int v[]){
    int i,j;
    i=1, j=2;
    int k=1;
    int l=2*n;
    for(i=1;i<=2*n;++i){
        if(i%2){
            v[i]=k;
            k+=2;
        }
        else{
            v[i]=l;
            l-=2;
        }
    }
    for(i=1;i<=2*n;++i){
        cout<<v[i]<<" ";
    }
}
int main(){    
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("error.txt", "w", stderr);
    // #endif
    int x;
    cin>>x;
    if(x%2==1){
        cout<<x<<" ";
        x=(x+1)/2;
    }
    while(x>1){
        cout<<x<<" "<<x-1<<" ";
        x/=2;
    }
    return 0;
}
