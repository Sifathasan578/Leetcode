#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int countCharacters(vector<string>& words, string chars) {
    unordered_map<char, int> charCount;
    for (char c : chars) {
        charCount[c]++;
    }

    int res = 0;
    for (string &word : words) {
        unordered_map<char, int> tempCount = charCount;
        bool canForm = true;
        for (char &c : word) {
            if (tempCount[c] > 0) {
                tempCount[c]--;
            } 
            else {
                canForm = false;
                break;
            }
        }
        if (canForm) {
            res += word.size();
        }
    }
    return res;

    // TC: O(C+N⋅L),
    // C: each characters in chars processing,
    // N: each word processing
    // L: average length of each word
}

int main() {
    int n; cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++) {
        string k; cin >> k;
        words.push_back(k);
    }
    string chars; cin >> chars;
    cout << countCharacters(words, chars) << "\n";
}
