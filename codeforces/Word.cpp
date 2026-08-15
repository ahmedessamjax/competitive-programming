// problem name: Word
// problem link: https://codeforces.com/problemset/problem/59/A
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
  string s;
  cin >> s;
  int upper = 0, lower = 0;
  for (char c : s) {
    if (islower(c))
      lower++;
    else
      upper++;
  }
  if (lower >= upper)
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return tolower(c); });
  else
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return toupper(c); });
  cout << s << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
}
