#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a,b,c;
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            
            if(a+b+c>=2){
                count++;
            }
        }
        cout << count;
    }
    return 0;
}