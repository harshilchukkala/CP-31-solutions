#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        int sum=0,max=0;
        for (int i=0;i<n;i++){
            cin >> v[i];
            sum += v[i];
            max += ((v[i]+x-1)/x);
        }
        cout << ((sum+x-1)/x) << " " << max << "\n";
    }
    return 0;
}