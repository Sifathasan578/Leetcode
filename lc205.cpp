#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool isIsomorphic(string s, string t) {
    string tmp1, tmp2;

    char idx = 'a';
    map<char, char> mp;
    for (char c : s) {
        if (mp[c] == 0) {
            tmp1 += idx;
            mp[c] = idx;
            idx++;
        }
        else {
            tmp1 += mp[c];
        }
    }

    mp.clear();
    idx = 'a';

    for (char c : t) {
        if (mp[c] == 0) {
            tmp2 += idx;
            mp[c] = idx;
            idx++;
        }
        else {
            tmp2 += mp[c];
        }
    }

    return tmp1 == tmp2;
}

int main() {
    string s, t; cin >> s >> t;
    cout << isIsomorphic(s, t) << "\n";
}
