/**
  @file 661.cpp
  @title  No.661 ハローキティはりんご3個分 - yukicoder
  @url https://yukicoder.me/problems/no/661
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int i;
  cin >> i;

  int N;
  while (cin >> N) {
    if (N % 8 == 0 && N % 10 == 0) {
      cout << "ikisugi" << endl;
    } else if (N % 8 == 0) {
      cout << "iki" << endl;
    } else if (N % 10 == 0) {
      cout << "sugi" << endl;
    } else {
      cout << N / 3 << endl;
    }
  }

  return 0;
}
