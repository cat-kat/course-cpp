#include <iostream>
#include <queue>

int m; 
char task;
std::queue<int> q;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cin>>m;
   for (int i=0; i<m; i++) {
        std::cin >> task;
        switch (task) {
            case '-' :
                std::cout << q.front() << '\n';
                q.pop();
                break;
            case '+' :
            	int el;
                std::cin >> el;
                q.push(el);
                break;
 }
    }
}
