#include <bits/stdc++.h>
using namespace std;
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
int main(){
    int n; cin>>n;
    int a[n+1];
    int i;
    for(i=1;i<=n;++i){
        cin>>a[i];
    }
    int max_so_far = a[1];
    int curr_max = a[1];
    
    for (int i = 2; i <= n; i++){
            curr_max = max(a[i], curr_max+a[i]);
            max_so_far = max(max_so_far, curr_max);
    }
    cout<<max_so_far;
    return 0;
}