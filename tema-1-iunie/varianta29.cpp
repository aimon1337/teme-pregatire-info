/*
1 - c
2 - (toc, creion, pensulă, pană, stilou)
    (toc, pensulă, creion, stilou, pană)
*/
#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
// ofstream fout("out.txt");
bool prim(int n) {
    int cnt = 0;
    for (int d = 1; d * d <= n; ++d) {
        if (n % d == 0)
            cnt += 2;
        if (d * d == n)
            cnt--;
    }
    if (cnt == 2)
        return 1;
    return 0;
}
int interval(int n) {
    for (int i = n; 1; ++i) {
        if (prim(i))
            return i + 1;
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<y<<" "<<x<<" ";
    /*
    63 = 2 * 48 - z + 2
    z = 2 * 48 -63 + 2
    z = 2 * x- y + 2;
    */
    int z;
    while(z){
        z = 2 * x - y + 2;
        cout<< z <<" ";
        y=x;
        x=z;
    }
    return 0;
}