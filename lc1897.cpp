#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool makeEqual(vector<string>& words) {
    int n = words.size();
    unordered_map<int, int> charCnt;

    for (int i = 0; i < n; i++) {
        for (char c : words[i]) {
            charCnt[c]++;
        }
    }

    for (auto &it : charCnt) {
        if (it.second % n != 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    cout << makeEqual(words) << "\n";
}
