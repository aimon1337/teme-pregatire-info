#include <bits/stdc++.h>
using namespace std;
ifstream fin("bac.txt");
//ofstream fout("iesire.txt");
// void interval(int n, int& a, int& b){
//     int i=1;
//     a=b=1;
//     for(i=1;i<=n-1;++i){
//         a=a*i;
//     }
//     a++;
//     for(i=1;i<=n+1;++i){
//         b=b*i;
//     }
//     b = b-1;
// }
int main(){    
    int f[100]={0};
    int tmp=0;
    while(fin >> tmp){
        while(tmp>9){
            f[tmp%100]++;
            tmp/=10;
        }
    }
    int max=0;
    for(int i = 10 ; i < 99 ; ++i){
        if(f[i]>max)
        max=f[i];
    }
    for(int i = 99 ; i > 9 ; --i){
        if(f[i]==max)
        cout << i << ' ';
    }
    
    fin.close();
    return 0;
}
