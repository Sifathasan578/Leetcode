#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int maxNumberOfBalloons(string text) {
    unordered_map<char, int> mp;
    for (char c : text) {
        mp[c]++;
    }

    int mn = text.size();
    mn = min(mn, mp['b']);
    mn = min(mn, mp['a']);
    mn = min(mn, mp['l'] / 2);
    mn = min(mn, mp['o'] / 2);
    mn = min(mn, mp['n']);

    return mn;

    // TC: O(n)
}

int main() {
    string text; cin >> text;
    cout << maxNumberOfBalloons(text) << "\n";
}
