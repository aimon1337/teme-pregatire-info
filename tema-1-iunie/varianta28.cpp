/*
1 - a
2 - 28,27,26
*/
#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
int resturi(int n, int x, int y, int r){
    int nr=0, i;
    for(i=1; i<=n; ++i){
        if(i % x == r && i % y == r)
            nr++;
    }
    return nr;
}
int main(){
    int n, v1, v2;
    v1 = v2 = -1;
    int lung = 1, lmax = 0;
    while(fin >> n){
        if(v1 != n && v2 != n){
            lung++;
            if(lung > lmax)
                lmax = lung;
        }
        else{
            lung = 1;
        }
        v2=v1;
        v1=n;
    }
    cout<<lmax;
    return 0;
}