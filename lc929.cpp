#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int numUniqueEmails(vector<string>& emails) {
    set<string> st;
    int n = emails.size();

    for (int i = 0; i < n; i++) {
        string tmp = emails[i];
        string tmp_two = "";

        int at = 0, plus = 0;
        for (char c : tmp) {
            if (c == '@') at = 1;

            if (at) tmp_two += c;
            else {
                if (c == '+') plus = 1;

                if (c == '.') continue;
                else {
                    if (plus) continue;
                    tmp_two += c;
                }
            }
        }
        st.insert(tmp_two);
    }

    int res = st.size();
    return res;
}

int main() {
    int n; cin >> n;
    vector<string> str;
    for (int i = 0; i < n; i++) {
        string k; cin >> k;
        str.push_back(k);
    }
    int res = numUniqueEmails(str);
    cout << res << "\n";
}
