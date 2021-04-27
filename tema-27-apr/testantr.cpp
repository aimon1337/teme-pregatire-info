#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
void afisare(int x, int y, int k){
    int i,j;
    for(i=x;i<=y;++i){
        for(j=i;j<=i+k-1;++j){
            cout<<j<<" ";
        }
        cout<<"* ";
        i=j;
    }
}
int nr_cifre(int x){
    int nr=0;
    while(x){
        nr++;
        x/=10;
    }
    return nr;
}
void matrice(){
    int i,j;
    int a[100][100];
    int x; cin>>x;
    int n; n=nr_cifre(x);
    for(i=n;i>=1;--i){
        for(j=1;j<=n;++j){
            a[j][i]=x%10;
        }
        x/=10;
    }
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    afisare(11,21,4);
    cout<<endl;
    matrice();
    cout<<endl;
    int x;
    while(fin>>x){
        if(x%2==0){
            cout<<x<<" ";
        }
    }   
    return 0;
}