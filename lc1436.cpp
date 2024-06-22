#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

string destCity(vector<vector<string>>& paths) {
    unordered_map<string, string> path;
    int n = paths.size();

    for (int i = 0; i < n; i++) {
        path[ paths[i][0] ] = paths[i][1];
    }

    string res = paths[0][0];
    while (path.find(res) != path.end()) {
        res = path[res];
    }
    return res;

    // TC: O(n)
}

int main() {
    int n; cin >> n;
    cin.ignore();
    vector<vector<string>> paths(n);
    for (int i = 0; i < n; i++) {
        string s, t;
        getline(cin, s);
        getline(cin, t);

        paths[i].push_back(s);
        paths[i].push_back(t);
    }
    cout << destCity(paths) << "\n";
}
