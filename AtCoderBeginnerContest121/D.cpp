#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int, int>> ab(n);
    for (int i = 0; i < n; i++) ab[i] = make_pair(a[i], b[i]);
    for (int i = 0; i < n; i++) cout << ab[i].first << "";
    cout << endl;
    for (int i = 0; i < n; i++) cout << ab[i].second << "";
    cout << endl;
    sort(ab.begin(), ab.end());
    for (int i = 0; i < n; i++) cout << ab[i].first << "";
    cout << endl;
    for (int i = 0; i < n; i++) cout << ab[i].second << "";
    cout << endl;
    
}
