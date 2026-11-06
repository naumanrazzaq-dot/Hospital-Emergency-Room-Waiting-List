#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    priority_queue<pair<int, string>> s;

    s.emplace(3, "Ali");
    s.emplace(8, "Ahmed");
    s.emplace(7, "talha");
    s.emplace(10, "awais");
    s.emplace(6, "Ahmad");

    while (!s.empty()) {
        // pair ka pehla element .first aur doosra .second hota hai
        cout << s.top().second << " (Priority: " << s.top().first << ")" << endl;
        s.pop();
    }

    return 0;
}