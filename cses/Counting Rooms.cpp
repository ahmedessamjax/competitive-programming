// problem name: Counting Rooms
// problem link: https://cses.fi/problemset/task/1192/
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

int n, m;
char arr[1000 + 10][1000 + 10];
bool valid(int r, int c) { return (r >= 0 and c >= 0 and r < n and c < m); }

bool visited[1000 + 10][1000 + 10];

void dfs(int r, int c) {
  if (!valid(r, c) || visited[r][c] || arr[r][c] != '.')
    return;
  visited[r][c] = true;
  dfs(r + 1, c);
  dfs(r - 1, c);
  dfs(r, c + 1);
  dfs(r, c - 1);
}

void solve() {
  cin >> n >> m;
  clr(visited, false);
  // ring(i, 0, n) { scanf("%s", arr[i]); }
  ring(i,0,n){
    ring(j,0,m){
      cin >> arr[i][j];
    }
  }
  int cnt = 0;
  ring(i, 0, n) {
    ring(j, 0, m) {
      if (arr[i][j] == '.' and !visited[i][j])
        dfs(i, j), cnt++;
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