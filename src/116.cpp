/**
  @file 116.cpp
  @title  No.116 門松列(1) - yukicoder
  @url https://yukicoder.me/problems/no/116
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> A(N, 0);
  REP(i, N) {
    cin >> A[i];
  }

  int ans = 0;
  REP(i, N - 2) {
    int kadomin = min({A[i], A[i + 1], A[i + 2]});
    int kadomax = max({A[i], A[i + 1], A[i + 2]});

    if (A[i] != A[i + 1] && A[i + 1] != A[i + 2] && A[i] != A[i + 2] && (kadomin == A[i + 1] || kadomax == A[i + 1])) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
