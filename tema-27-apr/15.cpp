#include <bits/stdc++.h>
using namespace std;
ifstream fin("bac.txt");
//ofstream fout("iesire.txt");
/*
void perfect(int a, int b){
    int s;
    int i,j;
    bool ok=false;
    for(i=a; i<=b; ++i){
        s=0;
        for(j=1; j<=i/2; ++j){
            if(i%j==0){
                s+=j;
            }
        }
        if(s==i){
            cout<<i<<" ";
            ok=true;
        }
    }
    if(ok==false){
        cout<<"Nu exista";
    }
}
*/
int main(){
    int x,y,l=1, lmax=-1, max;
    fin>>x;
    while(fin>>y){
        if(x==y) l++;
        else{
            if(l>=lmax){
                max=x;
                lmax=l;
            }
            l=1;
        }
        x=y;
    }
    int i;
    cout<<lmax<<endl;
    for(i=1;i<=lmax; ++i){
        cout<<max<<" ";
    }
    return 0;
}