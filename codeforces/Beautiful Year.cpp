// problem name: Beautiful Year
// problem link: https://codeforces.com/problemset/problem/271/A
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
  int y; cin >> y;
  for(int i = y+1; i <= 10000; i++){
    string tmp = to_string(i);
    if(tmp[0] != tmp[1] and tmp[1] != tmp[2] and tmp[2] != tmp[3] and tmp[0] != tmp[2] and tmp[0] != tmp[3] and 
    tmp[1] != tmp[3]) {
      cout << i << '\n';
      break;
    }
  }
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
