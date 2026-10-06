#include <bits/stdc++.h>
using namespace std;

long long primefact(long long n, long long k){
    long long ans = 0;
    while(n % k == 0){
        n /= k;
        ans++;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int b = primefact(n,3),a = primefact(n,2);
        if(b<a){
            cout << "-1\n";
            continue;
        }
        long long int rem = b-a;
        n *= (long long int)pow(2,rem);
        n /= (long long int)pow(6,b);
        if(n!=1){
            cout << "-1\n";
            continue;
        }
        cout << 2*b-a << "\n";
    }
    return 0;
}