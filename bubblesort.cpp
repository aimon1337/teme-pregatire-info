#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
int main(){
    int n; cin>>n;
    int v[200];
    int i,j;
    for(i=1;i<=n;++i){
        cin>>v[i];
    }
    bool ok;
    for(i=1; (i<=n-1) ; ++i){
        ok=false;
        for(j=1; j<=n-i; ++j){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                ok=true;
            }
        }
        if(ok==false)
            break;
    }
    for(i=1;i<=n;++i){
        cout<<v[i]<<" ";
    }
    return 0;
}