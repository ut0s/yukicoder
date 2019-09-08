/**
  @file 018.cpp
  @title  No.18 うーさー暗号 - yukicoder
  @url https://yukicoder.me/problems/no/18
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  string S;
  cin >> S;

  map<char, int> m;
  vector<char> dict;
  int count = 0;
  for (char c = 'A'; c <= 'Z'; c++) {
    m[c] = count;
    count++;

    dict.push_back(c);
  }

  REP(i, (int)S.size()) {
    // cout << m[S[i]] << " ";
    // cout << (m[S[i]] - i - 1 + 26 * (int)S.size()) % 26 << " ";
    cout << dict[(m[S[i]] - i - 1 + 26 * (int)S.size()) % 26];
  }
  cout << endl;

  return 0;
}
