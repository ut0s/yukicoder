/**
  @file 216.cpp
  @title  No.216 FAC - yukicoder
  @url https://yukicoder.me/problems/no/216
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> a(N, 0);
  vector<int> b(N, 0);
  REP(i, N) { cin >> a[i]; }
  REP(i, N) { cin >> b[i]; }

  map<int, int> m;
  REP(i, N) {
    m[b[i]] += a[i];
  }

  vector<int> l;
  for (auto e : m) {
    if (e.first != 0) l.push_back(e.second);
  }

  // cout << m[0] << endl;
  // cout << *max_element(ALL(l)) << endl;

  if (N == 1) {
    if (b[0] == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

  } else {
    if (m[0] >= *max_element(ALL(l))) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
