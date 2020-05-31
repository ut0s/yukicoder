/**
  @file 227.cpp
  @title  No.227 簡単ポーカー - yukicoder
  @url https://yukicoder.me/problems/no/227
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  vector<int> A(5, 0);
  map<int, int> m;
  REP(i, 5) {
    cin >> A[i];
    m[A[i]]++;
  }

  vector<int> deck;
  for (auto e : m) {
    // cout << e.second << endl;
    deck.push_back(e.second);
  }
  sort(ALL(deck));

  if (deck.size() == 2 && deck[0] == 2 && deck[1] == 3) {
    cout << "FULL HOUSE" << endl;
  } else if (deck.size() == 3 && deck[2] == 3) {
    cout << "THREE CARD" << endl;
  } else if (deck.size() == 3 && deck[1] == 2 && deck[2] == 2) {
    cout << "TWO PAIR" << endl;
  } else if (m.size() == 4) {
    cout << "ONE PAIR" << endl;
  } else {
    cout << "NO HAND" << endl;
  }

  return 0;
}
