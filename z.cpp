#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long double left = B * log10(A);
    long double right = D * log10(C);
    if (left > right)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
