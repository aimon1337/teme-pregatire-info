#include <bits/stdc++.h>
using namespace std;
ifstream fin("bac.txt");
//ofstream fout("iesire.txt");
/*
1 - c
* * - - *
* * - * *
*/
void divizor(int n, int &d){
    d=2;
    while(n>1) if(n%d==0) n=n/d; else d=d+1;
}
int main(){   
    int n, x, v1, v2 ,v3;
    v1=v2=v3=1000000000;
    fin>>n;
    int i;
    for(i=1;i<=n/2;++i){
        fin>>x;
        if(x<v2){
            v1=v2;
            v2=x;
        }
    }
    fin>>v3;
    if(v2>v3){
        cout<<v2;
    }
    else{
        if(v2==v3 && v1>v2 && v1!=1000000000)
            cout<<v1;
        else if(v1==1000000000)
                cout<<"Nu exista!";
    }
    return 0;
}
