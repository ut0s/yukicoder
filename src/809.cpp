/**
  @file 809.cpp
  @title  No.809 かけ算 - yukicoder
  @url https://yukicoder.me/problems/no/809
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int C;
  cin >> C;

  for (int i = 1; i <= sqrt(C) + 1; i++) {
    if (C % i == 0) {
      cout << i << " " << C / i << endl;
      break;
    }
  }

  return 0;
}
