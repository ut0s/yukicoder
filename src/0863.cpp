/**
  @file main.cpp
  @title No.863 計算量
  @url https://yukicoder.me/problems/no/863
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

int main() {
  double A, B;
  cin >> A >> B;

  double hirei  = 200000 / 5000;
  double nizyou = (200 * 200) / (5 * 5);

  if (abs((B / A) - hirei) <= abs((B / A) - nizyou)) {
    cout << "1" << endl;
  } else {
    cout << "2" << endl;
  }

  return 0;
}
