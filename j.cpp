#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << ((A % B == 0 || B % A == 0) ? "Multiples" : "No Multiples") << endl;

    return 0;
}
