/**
  @file 552.cpp
  @title  No.552 十分簡単な星1の問題 - yukicoder
  @url https://yukicoder.me/problems/no/552
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  if (S == "0") {
    cout << S << endl;
  } else {
    cout << S + "0" << endl;
  }
  return 0;
}
