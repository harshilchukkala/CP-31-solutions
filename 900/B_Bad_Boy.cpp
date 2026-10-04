#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long dis(long long sx, long long sy, long long dx, long long dy){
    return (sx-dx)*(sx-dx) + (sy-dy)*(sy-dy);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        vector<pair<long long, pair<long long,long long>>> v = {
            {dis(1,1,i,j), {1,1}},
            {dis(n,1,i,j), {n,1}},
            {dis(1,m,i,j), {1,m}},
            {dis(n,m,i,j), {n,m}}
        };
        auto best = *max_element(v.begin(), v.end());
        long long x = best.second.first, y = best.second.second;
        long long dx = (x == 1) ? n : 1;
        long long dy = (y == 1) ? m : 1;
        cout << x << " " << y << " ";
        cout << dx << " " << dy << "\n";
    }
    return 0;
}