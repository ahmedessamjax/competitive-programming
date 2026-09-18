// problem name: 
// problem link: https://codeforces.com/problemset/problem/490/A
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
  int n;
  cin >> n;
  vector<int> ones, twos, threes;
  ring(i, 0, n) {
    int x;
    cin >> x;
    if (x == 1)
      ones.push_back(i + 1);
    else if (x == 2)
      twos.push_back(i + 1);
    else
      threes.push_back(i + 1);
  }
  int mn = min(min(sz(ones), sz(twos)), sz(threes));
  cout << mn << '\n';
  ring(i, 0, mn) cout << ones[i] << " " << twos[i] << " " << threes[i] << '\n';
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