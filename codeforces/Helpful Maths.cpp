// problem name: Helpful Maths
// problem link: https://codeforces.com/problemset/problem/339/A
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
  string s; cin >> s;
  map<int,int> mp;
  int sz = 0;
  for(char c: s){
    if(c == '1') mp[1]++, sz++;
    if(c == '2') mp[2]++, sz++;
    if(c == '3') mp[3]++, sz++;
  }
  while(mp[1] && (sz-1)){
    cout << "1+";
    mp[1]--; sz--;
  }
  while(mp[2] && (sz-1)){
    cout << "2+";
    mp[2]--; sz--;
  }
  while(mp[3] && (sz-1)){
    cout << "3+";
    mp[3]--; sz--;
  }
  if(sz){
    if(mp[1]) cout << 1;
    if(mp[2]) cout << 2;
    if(mp[3]) cout << 3;
  }
  cout << '\n';
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
