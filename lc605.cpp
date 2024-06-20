#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int sz = flowerbed.size(), zero = 0, one = 0, mx = 0;
    for (int i : flowerbed) {
        if (i == 1) {
            one++;
            if (one == 1) {
                mx += (zero / 2);
            }
            else {
                mx += ((zero - 1) / 2);
            }
            zero = 0;
        }
        else zero++;
    }
    if(one == 0) {
        mx += (zero + 1) / 2;
    }
    else {
        mx += (zero / 2);
    }
    
    if (n <= mx) return true;
    else return false;
}

int main() {
    int n; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vec.push_back(k);
    }
    int ele; cin >> ele;
    cout << canPlaceFlowers(vec, ele) << "\n";
}
