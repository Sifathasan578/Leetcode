#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

string largestGoodInteger(string num) {
    string res = "";
    int n = num.size();

    for (int i = 0; i < n - 2; i++) {
        if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
            string goodInt = num.substr(i, 3);
            if (res == "" || goodInt > res) {
                res = goodInt;
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
