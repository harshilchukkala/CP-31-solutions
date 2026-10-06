#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') k++;
        }
        int ans = min(k,n-k);
        if(ans%2==1) cout << "DA\n";
        else cout << "NET\n";
    }
    return 0;
}