#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

string largestGoodInteger(string num) {
    string res = "";
    int n = num.size();

    for (int i = 0; i < n; i++) {
        if (i + 2 < n and num[i] == num[i + 1] and num[i + 1] == num[i + 2]) {
            if (res == "") {
                res += num[i];
                res += num[i + 1];
                res += num[i + 2];
            }
            else {
                if (num[i] > res[0]) {
                    res = "";
                    res += num[i];
                    res += num[i + 1];
                    res += num[i + 2];
                }
            }
        }
    }

    return res;

    // TC: O(n)
}

int main() {
    string num; cin >> num;
    cout << largestGoodInteger(num) << "\n";
}
