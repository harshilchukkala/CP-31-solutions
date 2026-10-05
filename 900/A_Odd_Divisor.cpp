#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int ans=1;
        for(int i=1;i<63;i++){
            if(n==(long long int)pow(2,i)) ans = 0;
        }
        if(ans==0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}