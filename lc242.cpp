#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) return true;
    else return false;

    // TC: O(n logn), logn for sorting
    // Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
}

int main() {
    string s, t; cin>>s>>t;
    cout<<isAnagram(s, t)<<"\n";
}
