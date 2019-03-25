#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m, el;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        std::cin >> el;
        auto lower  = (std::lower_bound(v.begin(), v.end(), el) - v.begin());
        auto upper =(std::upper_bound(v.begin(), v.end(), el) - v.begin());
        if (lower!=upper) {
            std::cout << lower+1 << " " << upper << '\n';} else {
            std::cout<<"-1 -1"<<'\n';
        }
    }
}
