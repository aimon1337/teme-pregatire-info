#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
bool verif_prim(int x){
    if(x<=3)    return (x>1 && x<=3);
    if(x%2==0 || x%3==0)    return false;
    else{
        for(int i=5; i*i<=x; i=i+6){
            if(x%i==0 || x%(i+2)==0){
                return false;
            }
        }
    }
    return true;
}
int nrprim(int m){
    int nr=0, i=2;
    while(nr!=m){
        while(verif_prim(i)==false){
            i++;
        }
        nr++;
        if(nr==m)
            return i;
        i++;
    }
}
void print(int n, int a[500][500]){
    int i,j;
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n; cin>>n;
    int a[500][500];
    int i,j;
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            if(i==j){
                a[i][j]=0;
            }
            else{
                if(i>j){
                    a[i][j]=i;
                }
                else{
                    a[i][j]=nrprim(i);
                }
            }
        }
    }
    print(n,a);
    return 0;
}