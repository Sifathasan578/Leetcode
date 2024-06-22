// Given by chatGPT. Need to LEARN. 

#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

// Custom hash function for pair<int, int>
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const std::pair<T1, T2>& p) const {
        auto hash1 = std::hash<T1> {}(p.first);
        auto hash2 = std::hash<T2> {}(p.second);
        return hash1 ^ hash2; // Combine the two hash values
    }
};

bool isPathCrossing(string path) {
    unordered_set<pair<int, int>, hash_pair> st; // Use unordered_set with custom hash function
    st.insert({0, 0});

    int x = 0, y = 0;
    for (char c : path) {
        if (c == 'N') y++;
        else if (c == 'S') y--;
        else if (c == 'W') x--;
        else if (c == 'E') x++;

        if (st.count({x, y})) return true;
        else {
            st.insert({x, y});
        }
    }
    return false;
}

int main() {
    string s; cin >> s;
    cout << isPathCrossing(s) << "\n";
}
