#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool wordPattern(string pattern, string s) {
    unordered_map<string, int> mp;
    string tmp = "", res = "";
    char idx = 'a';
    for (char c : s) {
        if (c != ' ') {
            tmp += c;
        }
        else {
            if (mp[tmp] == 0) {
                res += idx;
                mp[tmp] = idx;
                idx++;

            }
            else {
                res += mp[tmp];
            }

            tmp = "";
        }
    }

    if (mp[tmp] == 0) {
        res += idx;
        mp[tmp] = idx;
        idx++;

    }
    else {
        res += mp[tmp];
    }

    string res2 = "";
    idx = 'a';
    map<char, int> mp2;
    for (char c : pattern) {
        if (mp2[c] == 0) {
            mp2[c] = idx;
            res2 += idx;
            idx++;
        }
        else {
            res2 += mp2[c];
        }
    }

    return res == res2;

    // TC: O(m+n), where mm is the length of the string s and nn is the length of pattern.
}

int main() {
    string pattern;
    cin >> pattern;

    cin.ignore();

    string str;
    getline(cin, str);

    cout << wordPattern(pattern, str) << "\n";
}
