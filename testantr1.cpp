#include <iostream>
#include <cstring>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
// ofstream fout("out.txt");
#define min(a,b) ((a) < (b) ? (a) :(b))
#define max(a,b) ((a) > (b) ? (a) :(b))
unsigned int ap[105];
int main(){
    unsigned int x;
    unsigned int i;
    while(fin >> x){
        if(x > 9 && x < 100)
            ap[x] = 1; 
    }
    unsigned int ok=0;
    for(i = 98; i >=10 && ok!=2; --i){
        if(ok == 0 && ap[i] == 0 && (i%10 != i/10)){
            ap[1] = i;
            ok++;
        }
        else{
            if(ok == 1 && ap[i] == 0 && (i%10 != i/10)){
                ap[2] = i;
                ok++;
            }
        }
    }
    if(ok == 0){
        cout << "Nu exista";
    }
    else{
        cout << ap[1] << " " << ap[2];
    }
    fin.close();
    return 0;
}