/**
  @file 207.cpp
  @title  No.207 世界のなんとか - yukicoder
  @url https://yukicoder.me/problems/no/207
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  LL A, B;
  cin >> A >> B;

  for (int i = A; i <= B; i++) {
    if (i % 3 == 0) {
      cout << i << endl;
    } else if (to_string(i).find("3") != string::npos) {
      cout << i << endl;
    }
  }

  return 0;
}
