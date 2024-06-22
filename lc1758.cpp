#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int minOperations(string s) {
    int n = s.size();
    string str1, str2;

    int res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++) {
        if (i & 1) {
            str1.push_back('0');
            str2.push_back('1');
        }
        else {
            str1.push_back('1');
            str2.push_back('0');
        }

        if (str1[i] != s[i]) res1++;
        if (str2[i] != s[i]) res2++;
    }

    return (int) min(res1, res2);
}

int main() {
    string s; cin >> s;
    cout << minOperations(s) << "\n";
}
