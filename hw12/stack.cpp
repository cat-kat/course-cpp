#include <iostream>
#include <stack>

std::stack<int> st;
int m;
char task; 

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
	std::cin >> m;
    for (int i=0; i<m; i++) {
        std::cin >> task;
        switch (task) {
            case '-' :
                std::cout << st.top() << '\n';
                st.pop();
                break;
            case '+' :
            	int el;
                std::cin >> el;
                st.push(el);
                break;
             }
    }
    return 0;
}
