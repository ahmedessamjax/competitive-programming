// problem name: Desorting
// problem link: https://codeforces.com/problemset/problem/1853/A
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
  int arr[n];
  for (auto &i : arr)
    cin >> i;
  bool sorted = true;
  ring(i, 0, n - 1) {
    if (arr[i] > arr[i + 1]) {
      sorted = false;
      break;
    }
  }
  // cout << sorted << " test\n";
  if (!sorted)
    cout << 0;
  else {
    int mn = INT_MAX;
    ring(i, 0, n - 1) { mn = min(abs(arr[i] - arr[i + 1]), mn); }
    // cout << mn << " = mn\n";
    cout << (mn + 2) / 2;
  }
  cout << '\n';
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