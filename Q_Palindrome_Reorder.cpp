// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     string s;
//     cin>>s;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> cnt(26, 0);
    for (char c : s) cnt[c - 'A']++;
    int oddCount = 0;
    int oddChar = -1;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] % 2 != 0) {
            oddCount++;
            oddChar = i;
        }
    }
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    string left = "", right = "";
    for (int i = 0; i < 26; ++i) {
        left.append(cnt[i] / 2, 'A' + i);
    }
    right = left;
    reverse(right.begin(), right.end());
    if (oddChar != -1)
        cout << left << string(cnt[oddChar] % 2 ? cnt[oddChar] : 0, 'A' + oddChar) << right;
    else
        cout << left << right;

    cout << "\n";
    return 0;
}

