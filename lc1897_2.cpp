#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool makeEqual(vector<string>& words) {
    int n = words.size();
    vector<int> charCnt(26, 0); // Assuming lowercase English letters

    for (int i = 0; i < n; i++) {
        for (char c : words[i]) {
            charCnt[c - 'a']++;
        }
    }

    for (int count : charCnt) {
        if (count % n != 0) {
            return false;
        }
    }

    // TC: O(n * m)
}

int main() {
    int n; cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    cout << makeEqual(words) << "\n";
}
