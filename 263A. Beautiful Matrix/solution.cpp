#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        int row,col;
        bool flag=false;
        for (int i=0;i<5;i++){
            for (int j=0;j<5;j++){
                int n;
                cin>>n;
                if(n==1){
                    row=i;
                    col=j;
                    flag=true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        cout<<abs(2-row)+abs(2-col);
        
    }
    return 0;
}

