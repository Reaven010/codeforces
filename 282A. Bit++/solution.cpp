#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        int x=0;
        int n;
        cin>>n;
        while(n--){
            string s;
            cin>>s;
            if(s=="X++" || s=="++X"){
                x++;
            }
            else if(s=="--X" || s=="X--"){
                x--;
            }
        }
        cout<<x;
    }
    return 0;
}
