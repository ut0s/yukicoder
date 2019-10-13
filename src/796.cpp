/**
  @file 796.cpp
  @title  No.796 well known - yukicoder
  @url https://yukicoder.me/problems/no/796
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, N) for (int i = 0; i < (N); ++i)

template <class T>
void show(vector<T>& v) {
  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main() {
  int N;
  cin >> N;

  vector<uLL> num(N, 3);
  uLL sum = 3 * N;
  uLL pro = pow(3, N);

  uLL limit = 312456;
  while (1) {
    if (sum % 3 == 1 && pro % 3 == 0 && sum <= limit) {
      show(num);
      break;
    } else {
      num[0]++;
      sum++;
      pro *= ((double)num[0] / (double)(num[0] - 1));
    }
  }

  return 0;
}
