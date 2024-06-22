#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int maxScore(string s) {
    s = "#" + s;
    int n = s.size();
    vector<int> pre_zero(n + 5, 0), suf_one(n + 5, 0);
    int zero = 0, one = 0;

    for (int i = 1, j = n; i < n; i++, j--) {
        if (s[i] == '0') {
            zero++;
        }
        if (s[j] == '1') {
            one++;
        }
        pre_zero[i] = zero;
        suf_one[j] = one;
    }

    int res = 0;
    for (int i = 1; i < n - 1; i++) {
        res = max(res, pre_zero[i] + suf_one[i + 1]);
    }

    return res;
}

int main() {
    string s; cin >> s;
    cout << maxScore(s) << "\n";
}
