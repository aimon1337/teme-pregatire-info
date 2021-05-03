#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
void citire(int v[200], int &n){
    int x;
    n=0;
    cin>>x;
    do{
        v[++n]=x;
        cin>>x;
    }while(x!=0);
    for(int i=1;i<=n-1;++i){
        for(int j=i+1; j<=n; ++j){
            if(v[i]==v[j]){
                for(int k=j; k<=n; k++){
                    v[k]=v[k+1];
                }
                n--;
            }
        }
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
bool palindrom(int x){
    int oglindit=0;
    int xx=x;
    while(x){
        oglindit=oglindit*10+x%10;
        x/=10;
    }
    if(oglindit==xx)
        return true;
    else
        return false;
}
void afisare(int y[200], int n){
    if(n==0){
        cout<<"Sirul Y e vid";
        return;
    }
    for(int i=1; i<=n; ++i){
        cout<<y[i]<<" ";
    }
}
void build(int x[200], int n){
    int j=0;
    int i;
    for(i=1;i<=n-1;++i){
        for(j=i; j<=n; ++j){
            if(x[i]<x[j]){
                x[i]=x[i]+x[j];
                x[j]=x[i]-x[j];
                x[i]=x[i]-x[j];
            }
        }
    }
    int y[200];
    j=0;
    for(i=1;i<=n;++i){
        if(palindrom(x[i])==true)
            y[++j]=x[i];
    }
    afisare(y, j);
}
int main(){
    int v[200];
    int n;
    citire(v,n);
    build(v,n);
    return 0;
}