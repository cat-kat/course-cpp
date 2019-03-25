#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(0);
    std::cin.tie(0);
    int n, k, A, B, C;
    std::cin >> n >> k;
    k--;
    std::vector<int> a(n);
    std::cin >> A >> B >> C >> a[0] >> a[1];
    for(int i = 2; i < n; i++) {
        a[i] = A * a[i - 2] + B * a[i - 1] + C;
    }
    std::nth_element(a.begin(), a.begin() + k, a.end());
    std::cout << a[k];
}
