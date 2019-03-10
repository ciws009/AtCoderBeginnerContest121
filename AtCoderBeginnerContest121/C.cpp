#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; i++) ab[i] = make_pair(a[i], b[i]);

    sort(ab.begin(), ab.end());

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int buy = min(m, ab[i].second);
        ans += (long long)ab[i].first * buy;
        m -= buy;
    }
    cout << ans << endl;
}
