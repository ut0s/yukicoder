/**
  @file 400.cpp
  @title  No.400 鏡 - yukicoder
  @url https://yukicoder.me/problems/no/400
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;
  int N = S.size();

  for (int i = N - 1; i >= 0; i--) {
    if (S[i] == '<') {
      cout << ">";
    } else {
      cout << "<";
    }
  }
  cout << endl;

  return 0;
}
