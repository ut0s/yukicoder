/**
  @file 069.cpp
  @title  No.69 文字を自由に並び替え - yukicoder
  @url https://yukicoder.me/problems/no/69
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string A, B;
  cin >> A >> B;

  sort(ALL(A));
  sort(ALL(B));

  if (A == B) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
