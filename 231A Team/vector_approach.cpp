#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    //using vector approach
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int >> mat;

        for (int i=0;i<n;i++){
            vector<int>row;
            for (int j=0;j<3;j++){
                int input;
                cin >> input;
                row.push_back(input);
            }
        mat.push_back(row);
    }
    int count =0;
    while(n--){
        int total= mat[n][0]+mat[n][1]+mat[n][2];
        if(total>=2){
            count++;
        }
    }
    cout<<count;

}

return 0;
}
