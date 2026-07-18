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
        string s;
        while(n--){
            cin>>s;
            if(s.size()>10){
                cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
            }
            else{
                cout<<s<<endl;
            }
        }
    }
    return 0;
}
