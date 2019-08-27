/**
  @file 739.cpp
  @title  No.739 大事なことなので２度言います - yukicoder
  @url https://yukicoder.me/problems/no/739
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  int N = (int)S.size();
  if (N % 2 != 0) {
    cout << "NO" << endl;
  } else {
    REP(i, N / 2) {
      if (S[i] != S[N / 2 + i]) {
        cout << "NO" << endl;
        exit(0);
      }
    }
    cout << "YES" << endl;
  }


  return 0;
}
