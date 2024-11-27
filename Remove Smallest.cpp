
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> k;
    while (n--) {
        int m;
        cin >> m;
        vector<int> v(m);

        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        bool n= true;

       for (int i = 1; i < m; i++) {
             if (v[i] - v[i-1] <= 1) {
               continue;
        } else {

            n=false;
            break;
        }
        }


        if (n) {
            k.push_back("YES");
        } else {
            k.push_back("NO");
        }

    }
     for (int i = 0; i < k.size(); i++) {
            cout <<"\n" <<k[i];
        }


    return 0;
}


