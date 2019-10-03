/**
  @file 353.cpp
  @title  No.353 ヘイトプラス - yukicoder
  @url https://yukicoder.me/problems/no/353
**/

#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

typedef long long LL;
#define ALL(obj) (obj).begin(), (obj).end()

#define OUT(x) cout << (x) << "\n"

void iostream_init() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(12);
}

int main() {
  ::iostream_init();

  vector<LL> AB(2, 0);
  cin >> AB[0] >> AB[1];

  OUT(accumulate(ALL(AB), 0));

  return 0;
}
