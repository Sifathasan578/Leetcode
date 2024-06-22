#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int firstUniqChar(string s) {
    int n = s.size();
    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'a'] == 1) return i;
    }
    return -1;
}

int main() {
    string s; cin >> s;
    cout << firstUniqChar(s) << "\n";
}
