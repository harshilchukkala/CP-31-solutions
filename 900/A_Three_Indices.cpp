#include <bits/stdc++.h>
using namespace std;

int find(vector<int> v,int n,int val){
    for(int i=0;i<n;i++){
        if(v[i]==val) return i;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n),maximum(n),minimum(n);
        for (int i=0;i<n;i++){
            cin >> v[i];
        }
        minimum[0]=v[0];
        for(int i=1;i<n;i++){
            minimum[i]=min(minimum[i-1],v[i]);
        }
        maximum[n-1]=v[n-1];
        for(int i=1;i<n;i++){
            maximum[n-1-i]=min(maximum[n-i],v[n-1-i]);
        }
        int ans = 0;
        int bef=-1,val=-1,af=-1;
        for(int i=1;i<n-1;i++){
            if(v[i]>minimum[i-1] && v[i]>maximum[i+1]){
                ans = 1;
                bef=minimum[i-1];
                af=maximum[i+1];
                val=v[i];
                break;
            }
        }
        if(ans==0) cout << "NO\n";
        else{
            cout << "YES\n";
            cout << find(v,n,bef)+1 << " " << find(v,n,val)+1 << " " << find(v,n,af)+1 << "\n";
        }
    }
    return 0;
}