#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int>p;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int c = -1;
        if(v[0]!=v[1])
        c=(v[0]==v[2])? 2:1;
         else {
            for (int i = 2; i < n; i++) {
                if (v[i] != v[0]) {
                    c = i + 1;
                    break;
                }
            }
        }

        p.push_back(c);
    }
     for (int i = 0; i <p.size(); i++) {
           cout<<"\n" <<p[i];
        }
    return 0;
}
