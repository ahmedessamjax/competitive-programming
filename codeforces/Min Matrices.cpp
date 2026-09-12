// problem name: Min Matrices
// problem link: https://codeforces.com/contest/2263/problem/B
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
  if (k > n * 2 - 1 || k < n) {
    cout << -1 << '\n';
    return;
  }
  int arr[n][n];
  int main = 1;
  int mx = n * n;
  ring(i, 0, n) {
    ring(j, 0, n) {
      if (i == j)
        arr[i][j] = main, main++;
      else
        arr[i][j] = mx, mx--;
    }
  }
  int rem = k - main + 1;
  int index = 1;
  while (rem--) {
    swap(arr[index][index], arr[index][0]);
    index++;
  }
  ring(i, 0, n) {
    ring(j, 0, n) {
      cout << arr[i][j] << " ";
    }
    ln;
  }
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