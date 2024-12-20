#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void o_rostering() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, vector<int>> g;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int t;
    cin >> t;

    vector<int> s(n, 1);
    int a = n;
    int d = 1;

    if (a >= t) {  // If initial employees already meet the target
        cout << d << endl;
        return;
    }

    while (a < t) {
        vector<int> ns(n, 0);
        bool changed = false;

        for (int e = 0; e < n; e++) {
            int f = 0;
            for (int j : g[e]) {
                f += s[j];
            }

            if (s[e] == 1) {
                ns[e] = (f == 3) ? 1 : 0;
            } else {
                ns[e] = (f < 3) ? 1 : 0;
            }
            if (ns[e] != s[e]) {
                changed = true;
            }
        }

        if (!changed) {
            cout << -1 << endl;  // Impossible to meet target
            return;
        }

        s = ns;
        a = 0;
        for (int u : s) {
            a += u;
        }
        d++;
    }

    cout << d << endl;
}

int main() {
    o_rostering();
    return 0;
}
