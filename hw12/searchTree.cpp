#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::multiset<int> tree;
    std::multiset<int> neg_tree;
    std::string task, output;
    int element;

    while (std::cin >> task >> element)
        switch (task[0]) {
            case 'i' :
                tree.insert(element);
                neg_tree.insert(-element);
                break;
            case 'd' :
                tree.erase(element);
                neg_tree.erase(-element);
                break;
            case 'e' :
                output = (tree.find(element) != tree.end()) ? "true" : "false";
                std::cout << output << '\n';
                break;
            case 'n' :
                output = (tree.upper_bound(element) != tree.end())
                        ? std::to_string(*tree.upper_bound(element)) : "none";
                std::cout << output << '\n';
                break;
            case 'p' :
                output = (neg_tree.upper_bound(-element) != neg_tree.end())
                        ? std::to_string(-*neg_tree.upper_bound(-element)) : "none";
                std::cout << output << '\n';
                break;
            default :
                break;
        }
return 0;
}
