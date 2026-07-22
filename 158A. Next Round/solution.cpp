#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int total=0;
        int p;
        vector<int>competitor;
        for (int j=0;j<n;j++){
            cin>>p;
            competitor.push_back(p);
        }
        p=competitor[k-1];
        for(int i=0;i<n;i++){
            if(competitor[i]>=p && competitor[i]!=0){
                total++;
            }
            else{
                break;
            }
        }
        cout<<total;
    }
    return 0;
}
