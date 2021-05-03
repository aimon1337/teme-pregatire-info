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
void eliminare(int x[100], int &n, int poz){
    for(int i=poz; i<=n; ++i){
        x[i]=x[i+1];
    }
    n--;
}
void print(int x[100], int n){
    if(n==0) cout<<"Sir vid";
    else
    for(int i=1;i<=n;++i){
        cout<<x[i]<<" ";
    }
}
void creare(int x[100], int &n){
    int i,j, R[100],poz=0;
    for(i=1; i<=n-1; ++i){
        bool ok=false;
        for(j=i+1; j<=n; ++j){
            if(x[i]==x[j]){
                R[++poz]=x[i];
                eliminare(x, n, j);
                ok=false;
            }
            else if (asemenea(x[i], x[j])==1){
                    R[++poz]=x[j];
                    eliminare(x,n,j);
                    ok=true;
                }
        }
        if(ok==true){
            R[++poz]=x[i];
        }
    }
    cout<<"X= ";
    print(x,n);
    cout<<endl;
    print(R,poz);

}
int main(){
    int x[100], n=0;
    citire(x,n);
    creare(x,n);
    return 0;
}