#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a,b;
        cin >> a >> b;
        if(a==b){
            cout << "0 0\n";
            continue;
        }
        if(b<a) swap(a,b);
        long long int d = b-a;
        long long int move = min(min(a%d,d-(a%d)),min(b%d,d-(b%d)));
        cout << d << " " << move << "\n";
    }
    return 0;
}