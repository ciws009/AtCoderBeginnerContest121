#include <iostream>
using namespace std;

int main() {
    int n, m, c, counter;
    int *a, *b;

    cin >> n >> m >> c;
    counter = 0;
    a = new int[n * m];
    b = new int[m];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < n * m; i++) cin >> a[i];
    int i = 0;
    while (i < n * m) {
        int sum = 0;
        for (int j = 0; i < m; j++) {
            sum += a[i] * b[j];
            i++;
        }
        sum += c;
        if (sum > 0) counter++;
    }

    cout << counter << endl;

    delete [] a;
    delete [] b;
}
