/**
  @file 700.cpp
  @title  No.700 LOVE - yukicoder
  @url https://yukicoder.me/problems/no/700
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> A(N, "");

  bool ok = false;
  REP(i, N) {
    cin >> A[i];
    auto pos = A[i].find("LOVE");
    if (pos != string::npos) {
      ok = true;
    }
  }

  string ret = ok ? "YES" : "NO";
  cout << ret << endl;

  return 0;
}
