#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
void citire(int x[100], int &n){
    int i;
    cin>>n;
    for(i=1;i<=n;++i){
        cin>>x[i];
    }
}
int asemenea(int x, int y){
    int v[10]={0};
    while(x){
        v[x%10]=1;
        x/=10;
    }
    while(y){
        if(v[y%10]==0)
            return 0;
        else{
            v[y%10]=2;
            y/=10;
        }
    }
    for(int i=0; i<=9 ; ++i){
        if(v[i]==1)
            return 0;
    }
    return 1;
}
void eliminare(int v[], int &n, int x, int y){
    for(int i = 1; i <= y-x+1; ++i){
        for(int j=x; j<n; ++j){
            v[j]=v[j+1];
        }
    }
    n=n-(y-x+1);
}
int cautare(int x[], int n, int k){
    for(int i=1 ;i<=n; ++i){
        if(x[i]==k) return 1;
    }
    return 0;
}
void build(int x[], int n, int r[], int &m){
    int i,j;
    for(i=1;i<n;++i){
        if(asemenea(x[i],x[i+1])){
            j=i+1;
            while(asemenea(x[i],x[j]) && j<=n){
                j++;
            }
            for(int k=i; k<j; ++k){
                if(cautare(r,m,x[k])==0) r[++m]=x[k];
            }
        }
    }
}
void eliminaresecv(int x[], int &n){
    for(int i=1;i<n;++i){
        if(asemenea(x[i],x[i+1])){
            int j=i+1;
            while(asemenea(x[i],x[j]) && j<=n){
                j++;
            }
            eliminare(x,n,i,j-1);
            i--;
        }
    }
}
void print(int x[100], int n){
    for(int i=1;i<=n;++i){
        cout<<x[i]<<" ";
    }
}
int main(){
    int x[200], r[200], n=0,m=0;
    citire(x,n);
    build(x,n,r,m);
    cout<<"\n";
    eliminaresecv(x,n);
    if(n>0){
        print(x,n);
        cout<<endl;
    }
    else    cout<<"X e vid\n";
    if(m>0)
        print(r,m);
    else    cout<<"R e vid\n";
    return 0;
}