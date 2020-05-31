/**
  @file 239.cpp
  @title  No.239 にゃんぱすー - yukicoder
  @url https://yukicoder.me/problems/no/239
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  int N;
  cin >> N;

  vector<vector<string>> A(N, vector<string>(N, ""));
  REP(i, N) {
    REP(j, N) {
      cin >> A[i][j];
    }
  }

  set<int> st;
  for (int i = 0; i < N; i++) {
    int c{0};
    for (int j = 0; j < N; j++) {
      if (A[j][i] == "nyanpass") {
        c++;
      }
    }
    if (c == N - 1) {
      st.insert(i + 1);
    }
  }

  cout << ((st.size() == 1) ? *st.begin() : -1) << endl;
  return 0;
}
