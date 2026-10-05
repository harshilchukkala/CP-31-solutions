#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<long long> v(n * k);
        for (auto &x : v) cin >> x;

        int m = (n + 1) / 2 - 1;
        vector<vector<long long>> a(k, vector<long long>(n));
        int idx = 0;

        for (int pos = 0; pos < m; pos++)
            for (int i = 0; i < k; i++)
                a[i][pos] = v[idx++];

        for (int i = 0; i < k; i++)
            for (int pos = m; pos < n; pos++)
                a[i][pos] = v[idx++];

        long long sum = 0;
        for (int i = 0; i < k; i++)
            sum += a[i][m];

        cout << sum << endl;
    }
    return 0;
}