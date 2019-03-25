#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    int n;
    std::cin>>n;
    std::vector<int> perm;
    perm.resize(n);
    for (int i = 0; i < n; ++i) {
        perm[i]=i+1;
    }
    do {
        for (int i=0; i<n; i++) {
            std::cout<<perm[i]<<" ";
        }
        std::cout << '\n';
    } while (std::next_permutation(perm.begin(), perm.end()));
}
