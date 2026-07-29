#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        string s;
        int one=0,two=0,three=0;
        cin >> s;
        for (char c:s){
            if(c == '1'){
                one++;
            }
            else if (c == '2'){
                two++;
            }
            else if(c == '3'){
                three++;
            }
        }
        string ans;
        while(one--){
            ans += "1+";
        }
        while(two--){
            ans += "2+";
        }
        while(three--){
            ans += "3+";
        }
        if(!ans.empty()){
            ans.pop_back();
        }
        cout << ans;
}

return 0;
}
