#include "random.h"
#include <iostream>

using namespace std;
using ll = long long;

int main(int, char* argv[]) {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long seed = atoll(argv[1]);
    auto gen = Random(seed);

    int t = 100;
    cout << t << "\n";
    for (int i = 0; i < t; i++) {
        int x, y, m;
        m = gen.uniform(800'000'000 / 2, 1'000'000'000 / 2) * 2;
        x = gen.uniform(0, m / 2 - 1) * 2;
        y = gen.uniform(0, m / 2 - 1) * 2 + 1;
        cout << x << " " << y << " " << m << "\n";
    }
    return 0;
}
