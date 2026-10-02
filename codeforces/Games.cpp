// problem name: Games
// problem link: https://codeforces.com/contest/268/problem/A
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
  int arr1[n], arr2[n];
  ring(i, 0, n) { cin >> arr1[i] >> arr2[i]; }
  int cnt = 0;
  ring(i, 0, n) {
    ring(j, 0, n) {
      if (i == j)
        continue;
      if (arr1[i] == arr2[j])
        cnt++;
    }
  }
    cout << cnt << '\n';
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