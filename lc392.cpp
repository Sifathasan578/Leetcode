#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() and j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        }
        else {
            j++;
        }
    }

    if (i >= s.size()) return true;
    else return false;

  // TC: O(n), n length of t
  // Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?
}

int main() {
    string s, t; cin>>s>>t;
    cout<<isSubsequence(s, t)<<"\n";
}
