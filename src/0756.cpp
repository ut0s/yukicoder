/**
  @file 756.cpp
  @title  No.756 チャンパーノウン定数 (1) - yukicoder
  @url https://yukicoder.me/problems/no/756
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int D;
  cin >> D;

  string champa_num = "0.";

  REP(i, D + 1) {
    champa_num += to_string(i);
  }

  cout << champa_num[D + 2] << endl;
  return 0;
}
