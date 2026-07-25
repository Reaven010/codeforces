#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        string s1,s2;
        cin >> s1 >> s2;
        int ans=0;
        for (int i=0;i<s1.size();i++){
            int s1_size,s2_size;
            if(s1[i]>='a' && s1[i]<='z'){
                s1_size=s1[i]-'a';
            }
            else{
            s1_size=s1[i]-'A';
            }
            if(s2[i]>='a' && s2[i]<='z'){
            s2_size=s2[i]-'a';
            }
            else{
            s2_size=s2[i]-'A';
            }
            if(s1_size>s2_size){
                ans=1;
                break;
            }
            else if(s1_size<s2_size){
                ans=-1;
                break;
            }
        }
        cout<<ans;

}
return 0;
}
