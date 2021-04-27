#include <bits/stdc++.h>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("iesire.txt");
int fr[10];
void triplete(int n) {
    int x, y, z;
    for (x = 0; x <= n; x++)
        for (y = x + 1; y <= n; y++) 
            if ((n - x * y) % y == 0 && (n - x * y) / y > y)
                cout << "(" << x << "," << y << "," << (n - x * y) / y << ")" << endl;
}
int main(){
    int n;
    fin>>n;
    int x;
    int i;
    while(fin>>x){
        fr[(int)log10(x)]++;
        
    }
    for(i=0; i<=9; ++i){
        if(fr[i]){
            n-=fr[i];
            cout<<fr[i]<<" "<<n<<endl;
        }
        if(n==0){
            cout<<pow(10, i);
            return 0;
        }
    }
    return 0;
}
