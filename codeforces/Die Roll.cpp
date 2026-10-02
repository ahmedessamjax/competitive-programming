// problem name: Die Roll
// problem link: https://codeforces.com/contest/9/problem/A
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
  int y, w;
  cin >> y >> w;
  int rem = 6 - max(y, w) + 1;
  if (rem == 0)
    cout << "0/1";
  if (rem == 1)
    cout << "1/6";
  if (rem == 2)
    cout << "1/3";
  if (rem == 3)
    cout << "1/2";
  if (rem == 4)
    cout << "2/3";
  if (rem == 5)
    cout << "5/6";
  if (rem == 6)
    cout << "1/1";
  ln;
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