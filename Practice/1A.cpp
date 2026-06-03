#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n, a;
    cin >> n >> m >> a;

    long long answer = ((m + a - 1) / a) * ((n + a - 1) / a);

    cout << answer << endl;
    return 0;
}