#include <iostream>
using namespace std;

void pairSort(long long a[], long long b[], long long n);

int main() {
    long long n, m;
    long long *a, *b;

    cin >> n >> m;
    a = new long long[n];
    b = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    pairSort(a, b, n);

    long long totalNumber = 0;
    long long totalPrice = 0;

    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < b[i]; j++) {
            if (totalNumber < m) {
                totalNumber++;
                totalPrice += a[i];
            }
        }
    }
    cout << totalPrice << endl;
}

void pairSort(long long a[], long long b[], long long n) {
    bool flag = 1;
    for (long long i = 0; flag; i++) {
        flag = 0;
        for (long long j = n - 1; j >= i + 1; j--) {
            if (a[j] < a[j - 1]) {
                long long temp1 = a[j];
                long long temp2 = b[j];
                a[j] = a[j - 1];
                b[j] = b[j - 1];
                a[j - 1] = temp1;
                b[j - 1] = temp2;
                flag = 1;
            }
        }
    }
}
