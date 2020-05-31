/**
  @file 558.cpp
  @title  No.558 575検出するやつ - yukicoder
  @url https://yukicoder.me/problems/no/558
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  auto pos = S.find("575");
  if (pos != string::npos) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
