#include <algorithm>
#include <iostream>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::unordered_set<long long> m;
    char task[18];
    std::string output;
    while (std::cin.getline(task, 18)) {
        int x = std::atoi(&task[7]);
        switch (task[0]) {
            case 'i' :
                m.insert(x);
                break;
             case 'e' :
                std::cout <<((m.find(x) != m.end()) ? "true" : "false")<< '\n';
                break;
		    case 'd' :
                m.erase(x);
                break;
           
    }
    }
}
