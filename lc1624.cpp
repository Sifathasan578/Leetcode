#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int maxLengthBetweenEqualCharacters(string s) {
    int n = s.size();
    map<char, pair<int, int>> mp;
    int res = -1;
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (mp.find(c) == mp.end()) {
            mp[c] = {i, i};
        }
        else {
            mp[c] = { min(i, mp[c].first), max(i, mp[c].second) };
        }
        res = max(res, mp[c].second - mp[c].first - 1);
    }
    return res;
}

int main() {
    string s; cin >> s;
    cout << maxLengthBetweenEqualCharacters(s) << "\n";
}
