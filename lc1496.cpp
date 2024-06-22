#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool isPathCrossing(string path) {
    set<pair<int, int>> st;
    st.insert({0, 0});

    int x = 0, y = 0;
    for (char c : path) {
        if (c == 'N') y++;
        if (c == 'S') y--;
        if (c == 'W') x--;
        if (c == 'E') x++;

        if (st.count({x, y})) return true;
        else {
            st.insert({x, y});
        }
    }
    return false;

    // O(n)
    // To-DO: 
    // Ensure that a hash set (unordered_set) is used 
    // instead of a tree-based set to maintain O(1)O(1) 
    // average time complexity for insertions and lookups.
}

int main() {
    string s; cin >> s;
    cout << isPathCrossing(s) << "\n";
}
