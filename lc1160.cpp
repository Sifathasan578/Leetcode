#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int countCharacters(vector<string>& words, string chars) {
    unordered_map<int, int> mp, mpp;
    for (char c : chars) {
        mp[c]++;
    }
    mpp = mp;

    int res = 0;
    for (string &str : words) {
        bool ok = true;
        for (char &c : str) {
            if (mp[c] > 0) {
                mp[c]--;
            }
            else {
                ok = false;
                break;
            }
        }
        if (ok) {
            res += str.size();
        }
        mp.clear();
        mp = mpp;
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

    // int n; cin >> n;
    // vector<int> res = getRow(n);
    // for (int i : res) {
    //     cout << i << " ";
    // }

    // int n; cin >> n;
    // vector<int> nums;
    // for (int i = 0; i < n; i++) {
    //     int k; cin >> k;
    //     nums.push_back(k);
    // }

    // cout << numIdenticalPairs(nums) << "\n";
}
