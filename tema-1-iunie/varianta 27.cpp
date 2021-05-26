/*
1 - 64246 - c
2 - {brandusa, liliac, margareta}, {iasomie, lalea, margareta};
*/
#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
int ranguri(int n){
    int i=0, nr=0;
    while(n){
        if(n%10==i){
            nr++;
        }
        n/=10;
        i++;
    }
    return nr;
}
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
int v[1001], x[1001], i, j, m, n, ok;
int main() {
    fin >> m >> n;
    for (i = 1; i <= m; i++)
        fin >> v[i];
    for (i = 1; i <= n; i++)
        fin >> x[i];
    i = m;
    j = n;
    while (i && j) {
        if (v[i] == x[j] && v[i] % 2 == 0) {
            ok = 1;
            cout << v[i] << " ";
            i--;
            j--;
        } else {
            if (v[i] > x[j]) {
                if (v[i] % 2 == 0) {
                    ok = 1;
                    cout << v[i] << " ";
                }
                i--;
            } else {
                if (x[j] % 2 == 0) {
                    ok = 1;
                    cout << x[j] << " ";
                }
                j--;
            }
        }
    }
    if (i && !j) {
        while (i) {
            if (v[i] % 2 == 0) {
                ok = 1;
                cout << v[i] << " ";
            }
            i--;
        }
    } else {
        while (j) {
            if (x[j] % 2 == 0) {
                ok = 1;
                cout << x[j] << " ";
            }
            j--;
        }
    }

    return 0;
}