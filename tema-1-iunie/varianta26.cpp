#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
void identice(int a , int b){
    int cnt = 0;
    for(int i = a ; i <= b ; ++i){
        bool ok = true;
        while(a > 9){
            if(a % 10 != (a/10)%10)
                ok=false;
            a/=10;
        }
        if(ok)
            cout << i << ' ' , cnt++;
    }
    if(!cnt)
        cout << "nu exista";
}
int main(){
     int n , m , x , mini , maxi , y , ok = 0 , ind = -1;
    fin >> n >> m;
    fin >> mini;
    for(int i = 2 ; i <= n ; ++i)
        fin >> maxi;
    fin >> x;
    if(maxi<=x || mini<=x){
        cout<<"imposibil";
    }
    else{
        for(int i = 2 ; i <= m ; ++i)
        {
            fin >> x;
            if(y <= mini && x >= maxi) ok = 1 , ind = i;
            y = x;
        }
        if(ok == 1) cout << ind;
        else cout << "imposibil";
    }
    return 0;
}