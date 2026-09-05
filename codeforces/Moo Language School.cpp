// problem name: Moo Language School
// problem link: https://codeforces.com/contest/2259/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define uint unsigned int
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vci vector<int>
#define vcll vector<long long>
#define mapii map<int, int>
#define mapsi map<string, int>
#define unmapii unordered_map<int, int>
#define unmapsi unordered_map<string, int>
#define vcstr vector<string>
#define ring(i, a, b) for (int i = a; i < b; i++)
#define ringr(i, a, b) for (int i = a; i > b; i--)
#define rings(i, a, b, step) for (int i = a; i < b; i += step)
#define sz(n) (n).size()
#define ln cout << '\n'
#define clr(mem, i) memset(mem, i, sizeof(mem))

void solve() {
  int n, k;
  cin >> n >> k;
  int cnt = 0;
  int ans = 0;
  string s;
  cin >> s;
  for (int i = 0; i <= sz(s) - k; i += k) {
    // cout << i << "\n";
    cnt = 0;
    for (int j = i; j < i + k; j++) {
      if (s[j] == '0') {
        break;
      }
      cnt++;
    }
    if (cnt == k)
      ans++ , cnt = 0;
  }
  if (cnt == k)
    ans++;
  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}